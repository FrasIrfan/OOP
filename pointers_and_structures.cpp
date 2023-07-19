#include <iostream>
using namespace std;

struct Book
{
    char author[30];
    int pages;
    int price;
};

int main()
{
    Book bookRecord, *ptrBook;
    ptrBook = &bookRecord;

    cout << "Enter author name: ";
    cin.get(ptrBook->author, 30);

    cout << "Enter pages: ";
    cin >> ptrBook->pages;

    cout << "Enter price: ";
    cin >> ptrBook->price;

    cout << "Author name: " << ptrBook->author << endl;
    cout << "Pages: " << ptrBook->pages << endl;
    cout << "Price: " << ptrBook->price << endl;

    return 0;
}
