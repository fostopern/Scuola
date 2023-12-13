#include "iostream"

int main()
{using namespace std;
    int n, numero, positivi = 0, negativi = 0, somma_p = 0, somma_n = 0;
    cout << "Inserisci un valore per n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << "Inserisci il numero " << i << ". ";
        cin >> numero;
        if(numero > 0)
        {
            positivi++;
            somma_p += numero;

        }
        else if(numero < 0)
        {
            negativi++;
            somma_n += numero;
        }
    }
    cout << "Hai inserito " << positivi << " numeri positivi e la loro somma è "<< somma_p << endl;
    cout << "Hai inserito " << negativi << " numeri negativi e la loro somma è "<< somma_n << endl;
}
