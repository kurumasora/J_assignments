#include<stdio.h>
#include<string.h>

int main(void){
    char name[1024] = "kurumasora";
    char sutdent_code[1024] = "3j2205917";

    char n[1024];

    char str1[1024];
    char str2[1024];
    char str3[1024];

    printf("本人確認をします\n");
    printf("名前"); scanf("%s", n);
    printf("学年:");scanf("%s", str1);
    printf("学籍番号: ");scanf("%s", str2);
    printf("出席番号: ");scanf("%s", str3);

    strcat(str3, str2);
    strcat(str3, str1);




    





}