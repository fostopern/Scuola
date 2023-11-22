
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Inserisci la tua età: ";
    cin >> age;    
    if(age < 12){ cout << "Bambino" << endl; }
    else if( 12 <= age and age <= 17 ){ cout << "Adolescente" << endl; }
    else if( 18 <= age and age <= 59 ){ cout << "Adulto" << endl; }
    else if( age >= 60 ){ cout << "Anziano" << endl; }
    return 0;
}

