#include "book.h"

Book::Book(){
    title = "none";
    author = "none";
}

Book::Book(string t, string a){
    title = t;
    author = a;
}

Book::Book(const Book& rhs){
    title = rhs.title;
    author = rhs.author;
}

string Book::getTitle(){
    return title;
}

string Book::getAuthor(){
    return author;
}

void Book::setTitle(string t){
    title = t;
}

void Book::setAuthor(string a){
    author = a;
}
