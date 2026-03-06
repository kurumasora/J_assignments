#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    char *string1 = argv[1];
    char *string2 = argv[2];

    int length1 = strlen(string1);
    int length2 = strlen(string2);

    printf("Length of string1: %d\n", length1);
    printf("Length of string2: %d\n", length2);

    int compareResult = strcmp(string1, string2);
    if (compareResult == 0) {
        printf("string1 and string2 are equal\n");
    } else if (compareResult < 0) {
        printf("string1 is less than string2\n");
    } else {
        printf("string1 is greater than string2\n");
    }

    char destination[100];
    strcpy(destination, string1);
    strcat(destination, string2);

    printf("Concatenated string: %s\n", destination);

    return 0;
}