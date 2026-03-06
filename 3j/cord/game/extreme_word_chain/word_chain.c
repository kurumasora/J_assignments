#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int entry(char abc[][50]) {
	char xy[4];
	int n = 0;
	FILE *fp;
	printf("(登録)先頭文字を入力:");
	scanf("%s", xy);
	fp = fopen(xy, "a");
        printf("入力:");
	    scanf("%s", abc[n]);
	    fprintf(fp, "%s\n", abc[n]);
        fclose(fp);
	return 0;
}/*例：「あ」というファイルをつくり「あ」から始まる単語をそこに登録する*/

int view(char abc[][50]) {
	char xy[4];
	int n = 0, getEof;
	FILE *fp;
	printf("(閲覧)先頭文字を入力:");
	scanf("%s", xy);
	fp = fopen(xy, "r");
	while(fscanf(fp, "%s", &abc[n]) != EOF){
    printf("%s\n", abc[n]); n++;
    }
	fclose(fp);
	return 0;
}