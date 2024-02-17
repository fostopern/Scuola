#include <iostream>
#include "string"


int main()
{using namespace std;
    int voto;
    string candidato;
    int voti[3];
    string candidati[3];
    for(int i = 1; i<=3; i++)
    {
        cout << "Inserisci il nome e il voto del giocatore numero " << i << " separati da uno spazio: ";
        cin >> candidato >> voto;
        candidati[i-1] = candidato;
        voti[i-1] = voto;
    }
    for(int i = 0; i<3; i++)
    {
        cout << "Il candidato numero " << i+1 << " si chiama " << candidato[i] << " e ha voto " << voti[i] << endl;
    }
}
