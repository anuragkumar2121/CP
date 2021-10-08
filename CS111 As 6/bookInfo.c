#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[50];
    char author[25];
    int ISBN;
    double Price;
};
typedef struct Book Book;
int main()
{
    int n;
    printf("Enter the no of Books : ");
    scanf("%d",&n);
    Book books[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter details of book %d :\n",i+1);
        fflush(stdin);
        scanf("%[^\n]s",books[i].title);
        fflush(stdin);
        scanf("%[^\n]s",books[i].author);
        scanf("%d %lf",&books[i].ISBN,&books[i].Price);
    }

    for(int i = 0;i<n;i++)
    {
        printf("Details of book %d :\n",i+1);
        printf("Title:%s\nAuthor:%s\nISBN:%d\nPrice:%0.2lf\n",
                books[i].title,books[i].author,books[i].ISBN,books[i].Price);
    }
    return 0;
}