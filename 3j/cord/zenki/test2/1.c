#include <stdio.h>
 int main(void)
    {
        char s1[6] = "aiueo";
        void* sp = (void*)&s1;
        printf("%s", sp); //spを経由してs1に格納された文字列を表示したい

        char s2[13] ="abcdef123456";
        printf("%s", s2);

        strcat(s1, s2);
        printf("%s", s1);

        return 0;
    }