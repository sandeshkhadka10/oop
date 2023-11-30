#include <iostream>
#include <string>
#include <cstdlib> // for exit()
#include <conio.h> // for getch()
using namespace std;

class Book {
private:
    string name;
    int bookid;

public:
    void getdata(string n, int b) {
        name = n;
        bookid = b;
    }

    string getName() {
        return name;
    }

    int getbookid() {
        return bookid;
    }
};

class Library {
private:
    Book* books;     // dynamic array to store books
    int numbooks;    // number of books currently in the library
    int maxbooks;    // maximum number of books the library can hold

public:
    Library(int n) {
        numbooks = 0;
        maxbooks = n;
        books = new Book[n];
    }

    ~Library() {
        delete[] books; // Destructor to release Dynamic Array Memory
    }

    void addBooks() {
        string name;
        int bookid;
        cout << "Enter the book name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the book id: ";
        cin >> bookid;
        if (numbooks < maxbooks) {
            books[numbooks].getdata(name, bookid);
            numbooks++;
            cout << "Book added." << endl;
        }
        else {
            cout << "Library is full, cannot add more books." << endl;
        }
    }

    void removeBooks() {
        if (numbooks > 0) {
            numbooks--;
            cout << "Book removed." << endl;
        }
        else {
            cout << "Library is empty, no books to remove." << endl;
        }
    }

    void showTotalBooks() {
        cout << "Total books: " << numbooks << endl;
    }
};

int main() {
    char choice;
    int n;
    cout << "Enter the number of books you want to add: ";
    cin >> n;
    Library library(n);

    do {
        system("cls");
        cout << "a. Add Books" << endl;
        cout << "b. Remove Books" << endl;
        cout << "c. Show total number of books" << endl;
        cout << "d. Exit" << endl;
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
        case 'a':
            library.addBooks();
            break;

        case 'b':
            library.removeBooks();
            break;

        case 'c':
            library.showTotalBooks();
            break;

        case 'd':
            exit(0);
            break;

        default:
            cout << "Invalid Input" << endl;
        }

        cout << "Press any key to continue....." << endl;
        getch();

    } while (choice != 'd');

    return 0;
}

