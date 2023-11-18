#include "iostream"
#include "math.h"



int main()
{
	using namespace std;
	int guess;
	int n = rand()%(10 + 1);
	cout << "Indovina il numero (0-10): ";
	cin >> guess;
	if(n == guess)
	{
		cout << "Hai indovinato!" << endl;
	}
	else
	{
		cout << "Non hai indovinato." << endl;
	
	}
}
