// WAP to store n books data such as title, author, pulication, price etc using structures. Display all the books information of a particular author.

#include <stdio.h>

struct books
{
    char title[50];
    char author[50];
    char publication[50];
    float price;
};

int main(){
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    
    struct books book[n];
    
    for(i = 0; i < n; i++){
        printf("Enter title of book %d: ", i + 1);
        scanf("%s", book[i].title);
        printf("Enter author of book %d: ", i + 1);
        scanf("%s", book[i].author);
        printf("Enter publication of book %d: ", i + 1);
        scanf("%s", book[i].publication);
        printf("Enter price of book %d: ", i + 1);
        scanf("%f", &book[i].price);
    }
    
    char author[50];
    printf("Enter the author name to search: ");
    scanf("%s", author);
    
    printf("\nBooks by %s:\n", author);
    for(i = 0; i < n; i++){
        if(strcmp(book[i].author, author) == 0){
            printf("Title: %s\n", book[i].title);
            printf("Publication: %s\n", book[i].publication);
            printf("Price: %.2f\n", book[i].price);
            printf("\n");
        }
    }
    
    return 0;
}
