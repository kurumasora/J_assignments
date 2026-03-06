#include <stdio.h>
 
#include <stdlib.h>
 
#include <stdbool.h>
 
#include <unistd.h> // for sleep
 
#include <time.h>
 
#define MAX_CARDS 5
 
// プレイヤーの手札情報を構造体で管理
 
typedef struct {
 
    int cards[MAX_CARDS];    // カードの配列
 
    int num_cards;           // カードの枚数
 
    bool used_joker;         // ジョーカー使用フラグ
 
    int score;               // スコア
 
} Player;
 
// 手札からカードを削除する
 
void show_rules() {
 
   system("clear"); // 画面をクリア
 
   printf("=============================================\n");
 
   printf("                 ゲームのルール\n");
 
   printf("=============================================\n\n");
 
   printf("ゲームの概要:\n");
 
   printf("・対戦形式:1対1\n");
 
   printf("・カード: 各プレイヤーは「1」～「5」のカード1枚ずつ（計5枚）と、ジョーカー1枚を持つ。\n\n");
 
   printf("カードの強さ:\n");
 
   printf("・基本的に数字が大きいカードが強い。\n");
 
   printf("・例外:\n");
 
   printf("  - 「1」のカードは、「2」「3」「4」に負けるが、「5」に勝つ。\n\n");
 
   printf("ゲームの進行:\n");
 
   printf("1. カードの選択:\n");
 
   printf("  - 各ターンで両プレイヤーは手札から1枚のカードを選び、同時に出す。\n");
 
   printf("  - 出したカードはそのターン終了後に破棄される。\n");
 
   printf("2. 勝敗の判定:\n");
 
   printf("  - 数字の大きいカードを出したプレイヤーが勝利し、1ポイントを得る。\n");
 
   printf("  - 同じ数字の場合は引き分けとなり、ポイントなし。カードは破棄される。\n");
 
   printf("3. ジョーカーの使用:\n");
 
   printf("  - ジョーカーを出したカードは「1つ上の強さ」として扱われる。\n");
 
   printf("    ・例: 「3 + ジョーカー」→「4」として扱う。\n");
 
   printf("    ・「5 + ジョーカー」は「1 + ジョーカー」にのみ負ける。\n");
 
   printf("    ・「1」と「5 + ジョーカー」は「６」として扱われるが、「１＋ジョーカー」にのみ負ける。\n");
 
   printf("4. 手札交換：\n");
 
   printf("  - 各ラウンド開始時に、30％の確率で発生するランダムイベントが発生する場合がある。\n");
 
   printf("  - このイベントは両プレイヤーの手札をすべて交換する。\n");
 
   printf("5. ターン数:\n");
 
   printf("  - 全5ターンで終了。\n");
 
   printf("6. 勝利条件:\n");
 
   printf("  - 5ターン終了時により多くのポイントを持っているプレイヤーが勝利。\n");
 
   printf("  - ポイントが同じ場合は引き分け。\n\n");
 
   printf("Enterキーを押してゲームを開始してください。\n");
 
    getchar(); // Enterキーを待つ
 
}
void remove_card(int cards[], int *num_cards, int card) {
 
    for (int i = 0; i < *num_cards; i++) {
 
        if (cards[i] == card) {
 
            for (int j = i; j < *num_cards - 1; j++) {
 
                cards[j] = cards[j + 1];
 
            }
 
            (*num_cards)--;
 
            return;
 
        }
 
    }
 
}
 
// カードの強さ判定
 
int judge_winner(int card1, bool joker1, int card2, bool joker2) {
 
    int effective_card1 = joker1 ? card1 + 1 : card1;
 
    int effective_card2 = joker2 ? card2 + 1 : card2;
 
    // 特殊ルール
 
    if (card1 == 1 && !joker1 && card2 == 5 && !joker2) return 1; // 1 vs 5
 
    if (card1 == 1 && !joker1 && card2 == 5 && joker2) return 2; // 1 vs 5+ジョーカー
 
    if (card1 == 1 && joker1 && card2 == 5 && !joker2) return 1; // 1+ジョーカー vs 5
 
    if (card1 == 1 && joker1 && card2 == 5 && joker2) return 1; // 1+ジョーカー vs 5+ジョーカー
 
    if (card1 == 1 && joker1 && card2 == 2 && !joker2) return 0; // 1+ジョーカー vs 2
 
    // 通常ルール
 
    if (effective_card1 > effective_card2) return 1;
 
    if (effective_card2 > effective_card1) return 2;
 
    return 0; // 引き分け
 
}
 
// 手札を表示する
 
void show_cards(int cards[], int num_cards) {
 
    printf("手札: ");
 
    for (int i = 0; i < num_cards; i++) {
 
        printf("%d ", cards[i]);
 
    }
 
    printf("\n");
 
}
 
// ランダムイベントの発生
void swap_cards(Player *player1, Player *player2) {
    printf("\n!! ランダムイベント発生: 手札を交換します !!\n");
 
    for (int i = 0; i < MAX_CARDS; i++) {
        int temp = player1->cards[i];
        player1->cards[i] = player2->cards[i];
        player2->cards[i] = temp;
       
 
    }
    
    printf("プレイヤー1とプレイヤー2の手札を交換しました！\n");
}
 
// ランダムイベントを発生させる関数
void random_event(Player *player1, Player *player2) {
    // ランダムに1～100の値を生成し、20%の確率で手札を交換する
    if (rand() % 100 < 20) {
        swap_cards(player1, player2);
    }
}
 
 
int main() {
 
    srand(time(NULL)); // 乱数の初期化
 
    // プレイヤーの構造体
 
    Player player1 = {{1, 2, 3, 4, 5}, MAX_CARDS, false, 0};
 
    Player player2 = {{1, 2, 3, 4, 5}, MAX_CARDS, false, 0};
 
    int num_cards_player1 = MAX_CARDS;
 
    int num_cards_player2 = MAX_CARDS;
 
    show_rules(); // ゲームのルールを表示
 
    system("clear"); // 画面をクリアして非表示にする（Linux/UNIX環境用）
 
 
    printf("ゲーム開始！\n");
 
 
 
    for (int turn = 1; turn <= MAX_CARDS; turn++) {
 
        int player1_card, player2_card;
 
        bool player1_joker = false, player2_joker = false;
 
        // ランダムイベントを発生させる
 
        random_event(&player1, &player2);
 
        // プレイヤー1のターン
 
        while (1) {
 
            printf("\n<<--ラウンド%d-->>\n", turn);
 
            printf("\n--- プレイヤー1のターン ---\n");
 
            show_cards(player1.cards, num_cards_player1);
 
            printf("ラウンド勝利数:%d\n", player1.score);
 
            printf("出すカードを選択してください (1-5): ");
 
            if (scanf("%d", &player1_card) != 1 || player1_card < 1 || player1_card > 5) {
 
                printf("無効な入力です。1から5の間で選択してください。\n");
 
                sleep(2);
 
                system("clear");
 
                continue;
 
            }
 
            // プレイヤー1のカードが既に使われているかチェック
 
            bool card_used1 = true;
 
            for (int i = 0; i < num_cards_player1; i++) {
 
                if (player1.cards[i] == player1_card) {
 
                    card_used1 = false;
 
                    break;
 
                }
 
            }
 
            if (card_used1) {
 
                printf("そのカードは既に使われています。別のカードを選んでください。\n");
 
                sleep(2);
 
                system("clear");
 
                continue;
 
            }
 
            break;
 
        }
 
        // ジョーカーの使用
 
        if (!player1.used_joker) {
 
            while (1) {
 
                printf("ジョーカーを使いますか？ (1: はい, 0: いいえ)：");
 
                int joker_input;
 
                if (scanf("%d", &joker_input) != 1 || (joker_input != 0 && joker_input != 1)) {
 
                    printf("無効な入力です。もう一度入力してください。\n");
 
                    while (getchar() != '\n'); // 入力バッファをクリア
 
                    sleep(2);
 
                    system("clear");
 
                    continue;
 
                }
 
                player1_joker = joker_input == 1;
 
                if (player1_joker) player1.used_joker = true;
 
                break;
 
            }
 
        }
 
        remove_card(player1.cards, &num_cards_player1, player1_card);
 
        // プレイヤー2のターン
 
        getchar(); // Enterキーが押されるのを待つ
 
        system("clear");
 
        while (1) {
 
            printf("<<--ラウンド%d-->>\n", turn);
 
            printf("\n--- プレイヤー2のターン ---\n");
 
            show_cards(player2.cards, num_cards_player2);
 
            printf("ラウンド勝利数:%d\n", player2.score);
 
            printf("出すカードを選択してください (1-5): ");
 
            if (scanf("%d", &player2_card) != 1 || player2_card < 1 || player2_card > 5) {
 
                printf("無効な入力です。1から5の間で選択してください。\n");
 
                while (getchar() != '\n');
 
                sleep(2);
 
                system("clear");
 
                continue;
 
            }
 
            // プレイヤー2のカードが既に使われているかチェック
 
            bool card_used2 = true;
 
            for (int i = 0; i < num_cards_player2; i++) {
 
                if (player2.cards[i] == player2_card) {
 
                    card_used2 = false;
 
                    break;
 
                }
 
            }
 
            if (card_used2) {
 
                printf("そのカードは既に使われています。別のカードを選んでください。\n");
 
                sleep(2);
 
                system("clear");
 
                continue;
 
            }
 
            break;
 
        }
 
        // ジョーカーの使用
 
        if (!player2.used_joker) {
 
            while (1) {
 
                printf("ジョーカーを使いますか？ (1: はい, 0: いいえ)：");
 
                int joker_input;
 
                if (scanf("%d", &joker_input) != 1 || (joker_input != 0 && joker_input != 1)) {
 
                    printf("無効な入力です。もう一度入力してください。\n");
 
                    while (getchar() != '\n');
 
                    sleep(2);
 
                    system("clear");
 
                    continue;
 
                }
 
                player2_joker = joker_input == 1;
 
                if (player2_joker) player2.used_joker = true;
 
                break;
 
            }
 
            getchar();
 
            system("clear");
 
        }
 
        remove_card(player2.cards, &num_cards_player2, player2_card);
 
        // 勝敗判定
 
        int winner = judge_winner(player1_card, player1_joker, player2_card, player2_joker);
 
        printf("\nラウンド%dの結果:\n", turn);
 
        switch (winner) {
 
            case 1:
 
                printf("プレイヤー1が勝利！\n");
 
                player1.score++;
 
                break;
 
            case 2:
 
                printf("プレイヤー2が勝利！\n");
 
                player2.score++;
 
                break;
 
            default:
 
                printf("引き分けです。\n");
 
                break;
 
        }
 
        printf("プレイヤー1の出したカード: %d%s\n", player1_card, player1_joker ? " + ジョーカー" : "");
 
        printf("プレイヤー2の出したカード: %d%s\n", player2_card, player2_joker ? " + ジョーカー" : "");
 
        printf("現在のスコア: プレイヤー1: %d, プレイヤー2: %d\n", player1.score, player2.score);
 
        printf("\nEnterを押してください\n");
 
        getchar();
 
        system("clear");
 
    }
 
    // ゲーム終了
 
    printf("\nゲーム終了！\n");
 
    if (player1.score > player2.score) {
 
        printf("プレイヤー1の勝利！\n");
 
    } else if (player2.score > player1.score) {
 
        printf("プレイヤー2の勝利！\n");
 
    } else {
 
        printf("引き分け！\n");
 
    }
 
    return 0;
 
}
 