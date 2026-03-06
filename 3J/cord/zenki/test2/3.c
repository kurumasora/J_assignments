#include <stdio.h>
//ad関数の部分はここから
    void ad(int* point)
    { *point *= 1.1; }
    //ad関数の部分はここまで

    int main(void)
    {
        int point = 55;

        ad(&point); //ad関数を呼び出す部分

        printf("点数は%d点\n", point);

        return 0;
    }