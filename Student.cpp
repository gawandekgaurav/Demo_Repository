#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    int rollno, marks[3];
    float percent;
    string name;

public:
    Student()
    {
        this->rollno = 0;
        this->name = "John";
        this->percent = 0.0;
        this->marks[3] = {};
    }
    Student(int rollno, int marks[3], float percent, string name)
    {
        this->rollno = rollno;
        this->name = name;
        this->percent = percent;
        this->marks[3] = marks[3];
    }
    void acceptInfo()
    {
        cout << "Enter roll no:" << endl;
        cin >> rollno;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter marks of 3 subjs:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "roll no:" << rollno << endl;
        cout << "name:" << name << endl;
        cout << "marks of 3 subjs:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << "\t";
        }
        float total = 0;
        float percent = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        percent = (total / 300) * 100;
        cout << "Total=" << total << endl;
        cout << "Percent=" << percent << endl;
    }
};
void writeFile(string filename, Student &s1)
{
    fstream fout(filename);
    fout.open(filename,ios::out|ios::binary|ios::app);
    fout.write((char *)&s1, sizeof(Student));
    s1.acceptInfo();
    fout.close();
}
// void readFile(string filename)
// {
//     istream fin(filename);
//     fin.read(filename)
// }
int main()
{
    Student s;
    string filename;
    cout << "enter fileame:" << endl;
    cin>>filename;
    writeFile(filename,s);
    //s.acceptInfo();
    cout << "\n============Display method=====" << endl;
    s.display();
    return 0;
}