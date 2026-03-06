#include <stdio.h>

#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define NUM_BOOKS 5

// 本の構造体を定義
typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int year;
} Book;

// 本の情報を表示する関数
void printBookInfo(Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
}

int main() {
    Book books[NUM_BOOKS];

    // 本の情報を入力
    for(int i = 0; i < NUM_BOOKS; i++) {
        printf("Enter title for book %d: ", i+1);
        scanf(" %[^\n]%*c", books[i].title);
        printf("Enter author for book %d: ", i+1);
        scanf(" %[^\n]%*c", books[i].author);
        printf("Enter year for book %d: ", i+1);
        scanf("%d", &books[i].year);
    }

    // 本の情報を表示
    for(int i = 0; i < NUM_BOOKS; i++) {
        printf("\nBook %d:\n", i+1);
        printBookInfo(books[i]);
    }

    return 0;
}
