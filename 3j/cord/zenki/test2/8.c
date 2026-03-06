int main(void)
    {
        char s1[9] = "abc";
        char s2[9];

        printf("比較文字列："); scanf("%s",s2); //【1】は「s2」とは違う書き方にすること

        int re = strcmp(s1, s2); //s1とs2を比較した結果をreに格納
        if (re!=0) {
            printf("文字列は同じではない！");
        } else {
            printf("文字列は同じ！");
        }

        char s3[9];
        strcopy(s3, s2); //s3にs2の文字列をコピー

        return 0;
    }
