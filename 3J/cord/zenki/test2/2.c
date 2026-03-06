#include <stdio.h>
#include <string.h>
int main(void)
    {
        char a[] = "tottori"; char b[] = "kurayoshi";
        char* c = "yonago"; char* d = "sakaiminato";

        printf("a:%p b:%p c:%p d:%p\n", a, b, c, d);

        strcpy(a, "shimane"); strcpy(b, a);
        c = "okayama"; d = c;

        printf("a:%p/%s/%c b:%p/%s/%c\n", a, a, a[2], b, b, *(b+9));

        printf("c:%p/%s/%c d:%p/%s/%c\n", c, c, c[4], d, d, *(d+9));

        return 0;
    }