#include <stdio.h>
    void func(int temp[]) //仮引数名は「temp」とすること
    {
        int i, max =temp[0], min =temp[0]; //初期値として配列の先頭要素の値を格納する

        for (i = 1;i < 5; i++){
            if (max <temp[i]) max =temp[i];
            if (min > *(temp+5-i)) min =*(temp+5-i);
        }
        printf("最小値:%d 最大値:%d\n", min, max);
    }

    int main(void)
    {
        int t[] = {30, 20, 40, 10, 50};

        func(t);

        return 0;
    }