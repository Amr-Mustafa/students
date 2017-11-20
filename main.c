#include <stdio.h>
#include "stdlib.h"

typedef struct {
    char name[50];
    int ID;
    float GPA;
} Student;

Student* read_students (int n) {
    Student* records = (Student*) malloc (sizeof(Student) * n);

    for (int i = 0; i < n; i++) {
        printf("Enter the name, ID, and GPA of the %d student:\n", i + 1);
        getchar();
        gets(&records[i].name);
        scanf(" %d%f", &records[i].ID, &records[i].GPA);
    }

    return records;
}

void add_gpa (Student* array, int n) {
    for (int i = 0; i < n; i++) {
        array[0].GPA += 0.2;
    }
}

void display_students (Student* array, int n) {
    printf("%20s %4s %4s\n", "Student Name", "ID", "GPA");

    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", array[i].name, array[i].ID, array[i].GPA);
    }
}

int main() {
    Student* rec = read_students(5);
    display_students(rec, 5);
    return 0;
}