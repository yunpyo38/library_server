#ifndef BOOK_H
#define BOOK_H  

typedef enum{
//장르
} Genre;

typedef enum{ 
//대출상태
} BookStatus;
typedef struct {
    int id;
    char title[100];
    char author[100];
    char publisher[100];
    int pages;
    Genre genre;
    BookStatus status;
} Book;

#endif