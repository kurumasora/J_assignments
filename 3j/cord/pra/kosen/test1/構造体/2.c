#include <stdio.h>
#include <string.h>

#define MAX_TYPE_LENGTH 10

// 図形の構造体を定義
typedef struct {
    char type[MAX_TYPE_LENGTH];
    float radius;
    float width;
    float height;
} Shape;

// 図形の面積を計算して表示する関数
void printArea(Shape shape) {
    if(strcmp(shape.type, "circle") == 0) {
        printf("Area of circle: %.2f\n", 3.14159 * shape.radius * shape.radius);
    } else if(strcmp(shape.type, "rectangle") == 0) {
        printf("Area of rectangle: %.2f\n", shape.width * shape.height);
    } else {
        printf("Unknown shape type!\n");
    }
}

int main() {
    Shape shape;

    // 図形の情報を入力
    printf("Enter shape type (circle/rectangle): ");
    scanf("%s", shape.type);

    if(strcmp(shape.type, "circle") == 0) {
        printf("Enter radius: ");
        scanf("%f", &shape.radius);
    } else if(strcmp(shape.type, "rectangle") == 0) {
        printf("Enter width: ");
        scanf("%f", &shape.width);
        printf("Enter height: ");
        scanf("%f", &shape.height);
    } else {
        printf("Invalid shape type!\n");
        return 1;
    }

    // 図形の面積を表示
    printArea(shape);

    return 0;
}
