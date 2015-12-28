#include <stdio.h>
#include <string.h>
#include "lib.h"


int main() {

    struct myauthor author1;
    struct mybook book1;

    struct word temp_fn;
    struct word temp_ln;
    struct word temp_title;
    struct word temp_topic;

    strcpy(temp_fn.word, "Alvaro");
    strcpy(temp_ln.word, "Miranda");

    author1 = assign_author(&temp_fn, &temp_ln);

    strcpy(temp_title.word, "y u no devops");
    long int temp_isbn = 123123123;

    strcpy(temp_topic.word, "DevOps");

    book1 = assign_book(author1, &temp_title, temp_isbn, &temp_topic);

    printf("Hello from cli %s\n", author1.firstname->word);
    printf("Author of %s, category: %s\n", book1.title->word, book1.topic->word);
    printf("Want to quote this book? use:\nISBN %ld - %s - %s\n", book1.isbn, book1.title->word, author1.lastname->word);
    return 0;
}