#include <pch.h>
#include <iostream>

using namespace std;

int main() 
{
    int varsta;
    cout << "Introduceti varsta dumneavoastra: ";
    cin >> varsta;
    try 
    {      
        if (varsta >= 18) 
        {
            cout <<"Puteti avea acces!";
        }
        else 
        {
            throw (varsta);
        }
    }
    catch (int myNum) 
    {
        cout << "Nu poti avea acces - Trebuie sa ai varsta peste 18 ani\n";
        cout << "Varsta dumneavoastra este:  " << myNum;
    }
    return 0;
}
