#ifndef BOOK_H
#define BOOK_H

#include <iostream>

using namespace std;

class Book{
    string title, author;

    public:
        Book();
        Book(string, string);
        Book(const Book&);

        string getTitle();
        string getAuthor();
        void setTitle(string);
        void setAuthor(string);
};

#endif