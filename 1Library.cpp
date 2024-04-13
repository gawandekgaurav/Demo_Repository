#include <iostream>
using namespace std;
class Media
{
protected:
    int id;
    string name;

public:
    Media()
    {
        this->id = 0;
        this->name = "John";
    }
    Media(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void accept()
    {
        cout << "Enter id=" << endl;
        cin >> this->id;
        cout << "Enter name=" << endl;
        cin >> this->name;
    }
    virtual void display()
    {
        cout << "Id=" << id << endl;
        cout << "name=" << name << endl;
    }
};
class Book : public Media
{
private:
    string author;
    int pages;

public:
    Book()
    {
        this->author = "john";
        this->pages = 0;
    }
    Book(int id, string name, string author, int pages) : Media(id, name)
    {
        this->author = author;
        this->pages = pages;
    }
    void acceptBooks()
    {
        accept();
        cout << "Enter author=" << endl;
        cin >> this->author;
        cout << "Enter pages=" << endl;
        cin >> this->pages;
    }
    void display()
    {
        // display();
        cout << "Id=" << this->id << endl;
        cout << "name=" << name << endl;
        cout << "Author=" << author << endl;
        cout << "Pages=" << pages << endl;
    }
};
class Tape : public Media
{
private:
    int year;
    string albumName;

public:
    Tape()
    {
        this->year = 0;
        this->albumName = "doe";
    }
    Tape(int id, string name, int year, string albumName) : Media(id, name)
    {
        this->year = year;
        this->albumName = albumName;
    }
    void acceptTape()
    {
        accept();
        cout << "Enter year=" << endl;
        cin >> this->year;
        cout << "Enter album name=" << endl;
        cin >> this->albumName;
    }
    void display()
    {
        display();
        cout << "Year=" << year << endl;
        cout << "album name=" << albumName << endl;
    }
};
int main()
{
    int choice;

    Media m[5];
    Book *bObj;
    Tape *tObj;
    do
    {
        cout << "1.add new item\n2.issuing\n3.deposit amount\n4.exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:

           // bObj.acceptBooks();
            break;
        case 2:
            cout << "*****************display () of book*********" << endl;
          //  bObj.display();
            break;
        case 3:
            /* code */
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "invalid choice";
            break;
        }
    } while (choice != 4);

    return 0;
}