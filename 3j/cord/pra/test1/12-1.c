#include<stdio.h>

int main(void)
{
    struct student{
        char name;
        int height;
        double wight;
    };
    struct student kuruma = {'k', 165, 54.4};

    printf("名前: %c\n", kuruma.name);
    printf("身長: %d\n", kuruma.height);
    printf("体重: %lf\n", kuruma.wight);
    
    return 0;



}
