// WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using structure.
#include <stdio.h>
struct st
{
    char name[100];
    int roll_no;
    char gender;
    int marks;
};
int main()
{
    struct st uno;
    printf("Enter student roll no : ");
    scanf("%d", &uno.roll_no);
    printf("Enter student name : ");
    getchar();
    scanf("%[^|\n]s", uno.name);
    printf("Enter student gender (M/F) : ");
    getchar();
    scanf("%c", &uno.gender);
    printf("Enter student marks : ");
    scanf("%d", &uno.marks);
    printf("Student Roll No. : %d\n", uno.roll_no);
    printf("Student Name : %s\n", uno.name);
    printf("Student Gender : %c\n", uno.gender);
    printf("Student Marks : %d", uno.marks);
    return 0;
}