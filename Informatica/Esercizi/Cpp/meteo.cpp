#include "iostream"

int main()
{using namespace std;
    int massima, minima, i = 0;
    string citta[5] = {"Avellino", "Benevento", "Caserta", "Napoli", "Salerno"};
    int massime [5] = {};
    int minime [5] = {};
    for(string citta : citta){
        cout << "Inserisci la temperatura massima e la minima di "<< citta << " separate da uno spazio: ";
        cin>> massima >> minima;
        massime[i] = massima;
        minime[i] = minima;
        ++i;
    }
    massima = 0;
    for(int temp : massime){
        if(temp > massima) massima = temp;
    }
    minima = massima;
    for(int temp : minime){
        if(temp < minima) minima = temp;
    }
    for(int i = 0; i < 5; i++){
        if(massime[i] == massima) cout << "La città più calda è " << citta[i] << " con una massima di " << massima << " e una minima di "<< minime[i]<< endl;
    }
    for(int i = 0; i < 5; i++){
        if(minime[i] == minima) cout << "La città più fredda è " << citta[i] << " con una massima di " << massime[i] << " e una minima di "<< minima<< endl;
    }
}
