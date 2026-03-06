#include <stdio.h>
#include <time.h>

// UNIX 時間を表示する関数
void display_unix_time() {
    time_t current_time = time(NULL);
    printf("UNIX 時間: %ld\n", current_time);
}

// 現在の時刻を表示する関数
void display_readable_time() {
    time_t current_time = time(NULL);
    char buffer[80];
    struct tm *time_info = localtime(&current_time);
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", time_info);
    printf("現在時刻: %s\n", buffer);
}

// 現在の時刻を tm 構造体を使って表示する関数
void display_tm_structure() {
    time_t current_time = time(NULL);
    struct tm *time_info = localtime(&current_time);
    printf("年: %d\n", time_info->tm_year + 1900);
    printf("月: %d\n", time_info->tm_mon + 1);
    printf("日: %d\n", time_info->tm_mday);
    printf("時: %d\n", time_info->tm_hour);
    printf("分: %d\n", time_info->tm_min);
    printf("秒: %d\n", time_info->tm_sec);
    printf("1月1日からの日数: %d\n", time_info->tm_yday + 1);
}

// 関数ポインタの型定義
typedef void (*time_display_func)();

int main() {
    // 関数ポインタの配列
    time_display_func functions[] = {display_unix_time, display_readable_time, display_tm_structure};
    
    int choice;
    printf("実行する関数を選択してください:\n");
    printf("1. UNIX 時間を表示\n");
    printf("2. 現在時刻を表示\n");
    printf("3. tm 構造体を使って時刻を表示\n");
    printf("選択肢を入力してください (1-3): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        functions[choice - 1]();
    } else {
        printf("無効な選択肢です。\n");
    }

    return 0;
}