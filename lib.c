//
// Created by Alvaro Miranda on 28/12/15.
//

#include <string.h>
#include "lib.h"

struct myauthor assign_author(
        char fn[20],
        char ln[20]){
    struct myauthor ret;
    strncpy(ret.firstname, fn, sizeof(ret.firstname));
    strncpy(ret.lastname, ln, sizeof(ret.lastname));

    return ret;
}

struct mybook assign_book(
        struct myauthor author,
        char title[50],
        long int isbn,
        char topic[20]){
    struct mybook ret;
    strncpy(ret.author.firstname, author.firstname, sizeof(ret.author.firstname));
    strncpy(ret.author.lastname, author.lastname, sizeof(ret.author.lastname));
    strncpy(ret.title, title, sizeof(ret.title));
    ret.isbn = isbn;
    strncpy(ret.topic, topic, sizeof(ret.topic));
    return ret;
}
