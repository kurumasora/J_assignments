#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define NUM_STUDENTS 3

// 学生の構造体を定義
typedef struct {
    char name[MAX_NAME_LENGTH];
    int id;
    float grade;
} Student;

// 学生の情報を表示する関数
void printStudentInfo(Student student) {
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("Grade: %.2f\n", student.grade);
}

int main() {
    Student students[NUM_STUDENTS];

    // 学生の情報を入力
    for(int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter ID for student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter grade for student %d: ", i+1);
        scanf("%f", &students[i].grade);
    }

    // 学生の情報を表示
    for(int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i+1);
        printStudentInfo(students[i]);
    }

    return 0;
}
