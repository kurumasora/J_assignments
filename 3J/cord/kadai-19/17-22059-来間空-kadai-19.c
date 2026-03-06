#include <stdio.h>

#include <stdlib.h>

// ファイルを読み込む関数

void readFile(char *fileName) {

    FILE *file = fopen(fileName, "r");  // ファイルを読み込みモードで開く

    if (file == NULL) {  // ファイルが存在しない場合

        printf("ファイルが存在しない！\n");

        return;

    }

    printf("ファイルの内容は以下の通り！\n");

    char ch;

    // fgetc関数で1文字ずつ読み込み、EOFに達するまで表示

    while ((ch = fgetc(file)) != EOF) {

        putchar(ch);  // 読み込んだ文字を表示

    }

    fclose(file);  // ファイルを閉じる

}

// ファイルに上書きする関数

void writeFile(char *fileName) {

    FILE *file = fopen(fileName, "w");  // ファイルを上書きモードで開く

    if (file == NULL) {  // ファイルを開けない場合

        printf("ファイルを開くことができません！\n");

        return;

    }

    char input[256];

    printf("書き込みたい文字列の入力\n");

    scanf("%s", input);  // ユーザーから文字列を入力

    // fputc関数で1文字ずつファイルに書き込む

    for (int i = 0; input[i] != '\0'; i++) {

        fputc(input[i], file);

    }

    printf("%sの書き込みが完了！\n", input);

    fclose(file);  // ファイルを閉じる

}

// ファイルに追記する関数

void appendFile(char *fileName) {

    FILE *file = fopen(fileName, "a");  // ファイルを追記モードで開く

    if (file == NULL) {  // ファイルを開けない場合

        printf("ファイルを開くことができません！\n");

        return;

    }

    char input[256];

    printf("追記したい文字列の入力\n");

    scanf("%s", input);  // ユーザーから文字列を入力

    // fputc関数で1文字ずつファイルに追記する

    for (int i = 0; input[i] != '\0'; i++) {

        fputc(input[i], file);

    }

    printf("%sの追記が完了！\n", input);

    fclose(file);  // ファイルを閉じる

}

int main() {

    char fileName[100];

    int operation;

    // ファイル名の入力

    printf("ファイル名の入力\n");

    scanf("%s", fileName);

    // 操作の選択

    printf("ファイルに対する操作の選択\n0：読み込み，1：書き込み（上書き），2：追記\n");

    scanf("%d", &operation);

    switch (operation) {

        case 0:

            readFile(fileName);  // 読み込み

            break;

        case 1:

            writeFile(fileName);  // 上書き

            break;

        case 2:

            appendFile(fileName);  // 追記

            break;

        default:

            printf("無効な操作です！\n");

            break;

    }

    return 0;

}