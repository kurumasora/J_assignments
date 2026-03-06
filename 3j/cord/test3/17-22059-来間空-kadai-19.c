#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;

    
    char filename[100];
    char c;
    int mode;
    printf("ファイル名: "); scanf("%s",filename);
    printf("0:読み込み 1:書き込み 2:追記\n");
    printf("モード："); scanf("%d",&mode);
    if(mode == 0){
        fp = fopen(filename,"r");
        if(fp == NULL){
            printf("ファイルが開けません\n");
            exit(1);
        }else{
            while((c = fgetc(fp))!= EOF){
                printf("%c",c);
            }
        }
        fclose(fp);
    }else if(mode == 1){
        char text[100];
        fp = fopen(filename,"w");
        if(fp == NULL){
            printf("ファイルが開けません\n");
            exit(1);
        }else{
            printf("書き込み内容:");
            scanf("%99s",text);
            int len = strlen(text);
            for(int i = 0; i<len; i++){
                fputc(text[i],fp);
            }
            printf("%sを書き込んだ\n",text);
            fclose(fp);
        }
    }else if(mode == 2){  
        char text[100];
        fp = fopen(filename,"a");
         if(fp == NULL){
            printf("ファイルが開けません\n");
            exit(1);
        }else{ 
            printf("追記する内容を入力してください：\n"); 
            int ch; 
            while ((ch = getchar()) != '\n'); 
            while ((ch = getchar()) != EOF) { 
                if (ch == '\n') 
                    break; 
            fputc(ch, fp); } 
            fclose(fp); 
            printf("追記が完了しました！\n"); 
        } 
    }else{
        printf("モードが不正です\n");
        return 0;
    }
}