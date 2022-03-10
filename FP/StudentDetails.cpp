#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int rollNo;
    char div;
    char batch[2];

public:
    void getDetails(void);
    void printDetails(void);
};

void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Roll number: ";
    cin >> rollNo;
    cout << "Your Div ";
    cin >> div;
    cout << "Your Batch ";
    cin >> batch;
}

void student::printDetails(void)
{
    cout << "-----------------------------------------------------" << endl;
    cout << "Student details =>" << endl;
    cout << "Name:" << name << endl
         << "Roll Number:" << rollNo << endl
         << "Div:" << div << endl
         << "Batch:" << batch << endl;
    cout << "-----------------------------------------------------" << endl;
}

int main()
{
    student std;

    std.getDetails();
    std.printDetails();

    return 0;
}