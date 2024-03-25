#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include "book.h"

class BookStore{
    string storeName;
    Book bookList[10000];
    int bookCount;

    public:
        BookStore();
        BookStore(string, Book*, int);
        BookStore(const BookStore&);

        string getStoreName();
        Book* getBooks();
        int getCount();

        void setStoreName(string);
        void addBook(Book);
};

#endif