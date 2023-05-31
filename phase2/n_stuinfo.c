//  WAP to store n student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using array of structure.
#include <stdio.h>
struct st
{
    char name[100];
    int roll;
    char gender;
    int marks;
};

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    struct st student[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails for student %d\n", i + 1);
        printf("Enter student roll no : ");
        scanf("%d", &student[i].roll);
        printf("Enter student name : ");
        getchar();
        scanf("%[^|\n]s", student[i].name);
        printf("Enter student gender (M/F) : ");
        getchar();
        scanf("%c", &student[i].gender);
        printf("Enter student marks : ");
        scanf("%d", &student[i].marks);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails for student %d\n", i + 1);
        printf("Student Roll No. : %d\n", student[i].roll);
        printf("Student Name : %s\n", student[i].name);
        printf("Student Gender : %c\n", student[i].gender);
        printf("Student Marks : %d", student[i].marks);
    }
    return 0;
}
