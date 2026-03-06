#include <stdio.h>
#include <stdlib.h>

int main() {
    // 一時ファイルを作成
    FILE *tmp = tmpfile();
    if (tmp == NULL) {
        perror("tmpfile");
        return 1;
    }

    // 一時ファイルに書き込む
    fputs("Hello, World!\n", tmp);
    fputs("This is a test.\n", tmp);

    // ファイルポインタをファイルの先頭に戻す
    rewind(tmp);

    // 一時ファイルから読み込む
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), tmp) != NULL) {
        printf("一時ファイルから読み込み: %s", buffer);
    }

    // 一時ファイルを閉じる
    fclose(tmp);

    // 新しいファイルを作成
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    // 新しいファイルに書き込む
    fprintf(file, "これは例のファイルです。\n");
    fclose(file);

    // ファイル名を変更
    if (rename("example.txt", "renamed_example.txt") != 0) {
        perror("rename");
        return 1;
    }

    // ファイルを削除
    if (remove("renamed_example.txt") != 0) {
        perror("remove");
        return 1;
    }

    printf("ファイル操作が正常に完了しました。\n");
    return 0;
}