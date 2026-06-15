#include <stdio.h>
#include <string.h>

// Structure define karna
struct Student {
    char naam[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    // Data bharna
    strcpy(s1.naam, "Ali");
    s1.roll_no = 101;
    s1.marks = 88.5;

    // Data print karna
    printf("Student Information:\n");
    printf("Naam: %s\n", s1.naam);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
