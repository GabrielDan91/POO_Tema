#include "pch.h"
#include <iostream>

using namespace System; 
using namespace std;

struct Persoana {
    unsigned vs;
    char nume[20];
    char prenume[20];
};

class Pers {
private:
    unsigned vs;
    char nume[20];
    char prenume[20];

public:
    Pers(unsigned vs1, char* num1, char* prenum1) {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned show_vs() { return this->vs; }
    char* show_nume() { return this->nume; }
};

int main()
{
    unsigned int a1 = 0;
    a1 = 17;
    Persoana p1;
    p1.vs = 20;
    strcpy_s(p1.nume, 4, "Ion");
    strcpy_s(p1.nume, 7, "George");
    Console::WriteLine("Hello user!");
    cout << p1.nume << "\t" << p1.prenume << p1.vs << endl;
    cout << "Hello!" << endl;
    Console::WriteLine("Utilizam clasa Pers");
    Pers p2(34, "Ionescu", "George");
    Pers* p3 = new Pers(40, "Ionescu", "Mihaela");
    cout << p2.show_nume() << "\t" << p2.show_vs() << endl;
    cout << p3->show_nume() << "\t" << p3->show_vs() << endl;
    Console::ReadKey();
    return 0;
}