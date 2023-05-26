// WAP to store n books data such as title, author, publication, price etc using structures. Display all the books information of a particular author.
#include <stdio.h>
#include <string.h>
struct books_author
{
    char title[100];
    char author[100];
    char pub[100];
    int price;
};

int main()
{
    int n;
    char src[100];
    printf("Enter the number of books : ");
    scanf("%d", &n);
    getchar();
    struct books_author bk[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails regarding book %d\n", i + 1);
        printf("Enter book title : ");
        scanf("%[^|\n]s", bk[i].title);
        getchar();
        printf("Enter book author : ");
        scanf("%[^|\n]s", bk[i].author);
        getchar();
        printf("Enter book publication : ");
        scanf("%[^|\n]s", bk[i].pub);
        getchar();
        printf("Enter book price : ");
        scanf("%d", &bk[i].price);
        getchar();
    }
    printf("\nEnter the name of author to search book for : ");
    scanf("%[^|\n]s", src);
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(src, bk[i].author))
        {
            printf("------ Book Details --------\n");
            printf("Title : %s\n", bk[i].title);
            printf("Author : %s\n", bk[i].author);
            printf("Publication : %s\n", bk[i].pub);
            printf("Price : %d\n", bk[i].price);
        }
    }
    return 0;
}
