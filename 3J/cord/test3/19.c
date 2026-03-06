#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void read_mode(char fn[100],FILE *timtim){
    
    timtim = fopen(fn,"r");
    if(timtim ==NULL){
        printf("you cant open tnis file\n");
        exit(1);
    }else{
        int f_mode=0;
        printf("which 1:'fgetc' or 2:'fgets'\n");scanf("%d",&f_mode);
        if(f_mode==1){
            char chin;
            while((chin = fgetc(timtim))!=EOF){
                printf("%c",chin);
            }
        }else if(f_mode==2){
            char chim[100];
            while(fgets(chim,100,timtim)!=NULL){
                printf("%s",chim);
            }
        }else{
            printf("damedame\n");
        }
        

    }
    fclose(timtim);

}

void write_mode(char fn[100],FILE *timtim){
    if((timtim =fopen(fn,"w"))==NULL){
        printf("you cant open this file\n");
    }else{
        timtim=fopen(fn,"w");
        int f_mode=0;
        printf("which 1:'fputc' or 2:'fputs'\n");scanf("%d",&f_mode);
        if(f_mode==1){
            char text[100];
            int len = strlen(timtim);
           
            printf("write something in %s:",fn);

            for(int i = 0;i<len;i++){
                scanf("%s",&text[i]);
            }

            for(int i = 0;text[i]!='\0';i++){
                fputc(text[i],timtim);
            }
            printf("\n");

            printf("you wrote '%s' in %s\n",text,fn);
        }else if(f_mode==2){
            char text[100];
            printf("write something in %s:\n",fn);
            fputs(text,timtim);
            printf("you wrote '%s' in %s\n",text,fn);
        }else{
            printf("damedame\n");
        }
    }
    fclose(timtim);
}

void add_mode(char fn[100],FILE *timtim){
    if((timtim =fopen(fn,"a"))==NULL){
        printf("you cant open this file\n");
    }else{
        char text[100];
        int len = strlen(text);
        printf("write something in %s:",fn);
        for(int i = 0;i<len;i++){
            fputc(text[i],timtim);
        }
        printf("you wrote '%s' in %s\n",text,fn);
}
    fclose(timtim);
}


int main(){
    FILE *oppai;
    char filename[100];
    
    printf("filename:");scanf("%s",filename);
    printf("ファイルに対する操作の選択\n");
    printf("0:読み込み 1:書き込み 2:追記\n");
    int mode = 0;
    scanf("%d",&mode);
    if (mode ==0){
        read_mode(filename,oppai);

    }else if(mode==1){
        write_mode(filename,oppai);
    }else if(mode==2){
        add_mode(filename,oppai);
    }else{
        printf("モードが不正です\n");
    }
    return 0;
}