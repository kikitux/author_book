//
// Created by Alvaro Miranda on 28/12/15.
//

#ifndef C_BI_CLI_LIB_LIB_H
#define C_BI_CLI_LIB_LIB_H

// struct
struct myauthor {
    char firstname[20];
    char lastname[20];

} ;

// struct
struct mybook {
    struct myauthor author;
    char title[50];
    long int isbn;
    char topic[20];
} ;

// function
extern struct myauthor assign_author(char fn[20], char ln[20]);
extern struct mybook assign_book(struct myauthor author, char title[50], long int isbn, char topic[20]);

#endif //C_BI_CLI_LIB_LIB_H
