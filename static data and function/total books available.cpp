#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

const int MAX_BOOKS = 10;

class Book
{
 private:
    string title;
    string author;
    int year;
    static int totalBooks;

 public:
    void setInfo(string t, string a, int y)
    {
        title = t;
        author = a;
        year = y;
        totalBooks++;
    }

    void displayInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    static int getTotalBooks()
    {
        return totalBooks;
    }

    void removeBook()
    {
        if (totalBooks > 0)
        {
            totalBooks--;
            cout << "Book removed from inventory: " << title << endl;
        }
        else
        {
            cout << "No books available to remove." << endl;
        }
    }
};

int Book::totalBooks = 0;

// Function to add a book to the library
void addBook(Book books[], int &numBooks)
{
    if (numBooks < 10)
    {
        string title, author;
        int year;

        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter publication year: ";
        cin >> year;

        books[numBooks].setInfo(title, author, year);
        
        numBooks++;
        cout << "Book added successfully." << endl;
    }
    else
    {
        cout << "Maximum number of books reached. Cannot add more." << endl;
    }
}

// Function to display all books in the library
void displayBooks(Book books[], int numBooks)
{
    if (numBooks > 0)
    {
        cout << "\nLibrary Books:" << endl;
        for (int i = 0; i < numBooks; i++)
        {
            cout << "Book " << (i + 1) << ":" << endl;
            books[i].displayInfo();
            cout << endl;
        }
    }
    else
    {
        cout << "No books available to display." << endl;
    }
}

// Function to remove a book from the library
void removeBook(Book books[], int &numBooks)
{
    if (numBooks > 0)
    {
        int index;
        cout << "Enter the index of the book to remove: ";
        cin >> index;

        if (index >= 1 && index <= numBooks)
        {
            books[index - 1].removeBook();
            numBooks--;
        }
        else
        {
            cout << "Invalid index. No book removed." << endl;
        }
    }
    else
    {
        cout << "No books available to remove." << endl;
    }
}

int main()
{
    Book books[MAX_BOOKS];
    int numBooks = 0;

    while (true)
    {
    	system("cls");
        cout << "\nLibrary Menu:" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Display all books" << endl;
        cout << "3. Remove a book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin>>choice;
        
        
        switch (choice)
        {
        case 1:
            addBook(books, numBooks);
            break;
        case 2:
            displayBooks(books, numBooks);
            break;
        case 3:
            removeBook(books, numBooks);
            break;
        case 4:
           exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
            getch();
        }
    }
    return 0;
}

