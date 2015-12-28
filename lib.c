//
// Created by Alvaro Miranda on 28/12/15.
//

#include <string.h>
#include <stdio.h>
#include "lib.h"

struct myauthor assign_author(
        struct word *fn,
        struct word *ln){
    struct myauthor ret;
    ret.firstname = fn;
    ret.lastname = ln;
    return ret;

}

struct mybook assign_book(
        struct myauthor author,
        struct word *title,
        long int isbn,
        struct word *topic){
    struct mybook ret;
    ret.author = author ;
    ret.title = title;
    ret.isbn = isbn;
    ret.topic = topic ;
    return ret;
}