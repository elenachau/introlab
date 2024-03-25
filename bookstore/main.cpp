#include "bookstore.h"

int main(){
    Book book1("The Lord of the Rings", "J. R. R. Tolkien");
    Book book2("Dune", "Frank Herbert");
    Book book3("Harry Potter", "J. K. Rowling");

    Book array[3] = {book1, book2, book3};
    BookStore store("Good Store", array, 3);

    Book newBook("Tale of Two Citys", "Charles Dickens");
    store.addBook(newBook);

    return 0;
}