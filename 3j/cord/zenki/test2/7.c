  #include<stdio.h>

   int main(int u,char* v[])
    {
        printf("コマンドラインから入力された文字列の数は%dで",u-1);
        for (int i=1; i<u; i++){
            printf("%s/", v[i]);
        }
        printf("\n");

        int num, re;
        printf("整数値を入力："); scanf("%d", &num);

        re = -1 * num;  
        //numの値の正負を入れ替えてreに格納
        printf("正負を入れ替えた値：%d\n", re);

        //numの値の1の位の値を取り出してreに格納
        re = num % 10;
        if (re < 0){
            re = -1 * re;
        }
        printf("１の位の数：%d\n", re);

        //numの値の桁数を計算してreに格納
        int count = 0;
        for(int i = 0; num != 0; i++){
            num /= 10;
            count++;
        }
        re = count; 

        printf("桁数：%d\n", re);

        return 0;
    }
