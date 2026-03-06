#include <stdio.h>
#include <string.h>

int main() {
    char str1[11]; 
    char *str2; 

    printf("配列str1に格納する文字列を入力して下さい.");
    scanf("%10s", str1); 
   
    printf("配列str1に格納した文字列の各文字の直前に「/」を入れて表示します. ");
    for (int i = 0; str1[i] != '\0'; i++) {
        printf("/%c", str1[i]);
    }
    printf("\n");



    printf("配列str1に格納した文字列をポインタstr2で扱うため,\n配列str1の先頭要素のアドレスをポインタstr2に代入します.\n");
    str2 = str1;
    printf("配列str1の格納した文字列の各文字の前後に「+」を入れて表示します.");
    int j = 0;
    while (*str2!= '\0') {
        printf("+%c", *str2);
        *str2++;
    }
   
    printf("+", *str2);
    
    printf("\n");

    
    str2= "ABCDE";

    printf("ポインタstr2が示す文字列を%sに変更します.\n", str2);
    printf("ポインタstr2が示す文字列が%sから%sに変更されました.\n", str1, str2);

    return 0;
}