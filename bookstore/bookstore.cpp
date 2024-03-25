#include "bookstore.h"

BookStore::BookStore(){
    storeName = "none";
    bookCount = 0;
}

BookStore::BookStore(string n, Book* list, int c){
    storeName = n;
    bookCount = c;
    for(int i = 0; i < bookCount; i++){
        bookList[i] = list[i];
    }
}

BookStore::BookStore(const BookStore& rhs){
    storeName = rhs.storeName;
    bookCount = rhs.bookCount;
    for(int i = 0; i < bookCount; i++){
        bookList[i] = rhs.bookList[i];
    }
}

string BookStore::getStoreName(){
    return storeName;
}

Book* BookStore::getBooks(){
    return bookList;
}

int BookStore::getCount(){
    return bookCount;
}

void BookStore::setStoreName(string n){
    storeName = n;
}

void BookStore::addBook(Book newBook){
    bookList[bookCount] = newBook;
    bookCount++;
}
