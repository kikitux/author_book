#include <stdio.h>
#include "lib.h"


int main() {

    struct myauthor author1;
    struct mybook book1;

    char temp_fn[20] = "alvaro";
    char temp_ln[20] = "miranda";

    author1 = assign_author(temp_fn, temp_ln);

    char temp_title[50] = "y u no devops my title";
    long int temp_isbn = 123123123;
    char temp_topic[20] = "devops";

    book1 = assign_book(author1, temp_title, temp_isbn, temp_topic);

    printf("Hello from cli %s %s\n", author1.firstname,author1.lastname);
    printf("Author of %s\n", book1.title);
    return 0;
}