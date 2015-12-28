//
// Created by Alvaro Miranda on 28/12/15.
//

#ifndef C_BI_CLI_LIB_LIB_H
#define C_BI_CLI_LIB_LIB_H

// struct

struct word {
    char word[50];
};

struct myauthor {
    struct word *firstname;
    struct word *lastname;

} ;

// struct
struct mybook {
    struct myauthor author;
    struct word *title;
    long int isbn;
    struct word *topic;
} ;

// function
struct myauthor assign_author(struct word *fn, struct word *ln);
struct mybook assign_book(struct myauthor author, struct word *title, long int isbn, struct word *topic);

#endif //C_BI_CLI_LIB_LIB_H
