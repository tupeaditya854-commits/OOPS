#include <iostream>
using namespace std;

class Book 
{
private:
    string title;
    string author;
    float price;

public:
   
    Book() 
   {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

   
    Book(string a, string b, float c) 
   {
    
        title = a;
        author = b;
        price = c;
    }

    void display() 
   {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $ " << price << endl;
    }
};

int main() 
{
    
    Book book1;

    
    Book book2("The Psychology of Money", "Morgan Housel", 19.99);

    cout << "Book 1:" << endl;
    book1.display();

    cout << "\nBook 2:" << endl;
    book2.display();

    return 0;
}
