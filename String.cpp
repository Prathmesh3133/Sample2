#include<iostream>
using namespace std;
void display(string);

int main()
{
    string strvar = "KPIT";
    string Fullname;
    cout << strvar << endl;
    cout << "Enter your name:";
    getline(cin,Fullname);
    cout << "The String is:" << Fullname << endl;
    cout << "lenght of string is:" << Fullname.length() << endl;
    cout << "size of string is:" << Fullname.size() << endl;

    cout << strvar + " " + Fullname << endl;
    display(strvar);
    return 0;
}

void display(string var)
{
    cout << "The String is:" << var << endl;
}