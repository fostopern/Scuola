#include"iostream"
using namespace std;
int main(){
  int number; // variabile temporanea
  int n, k; // numero di case // casa in cui si trova il poggiomarinese
  int counter; // numero di tentativi
  cout << "Inserisci due numeri: ";
  cin >> n >> k; // inserisco i dati in input nelle variabili
  int nxt[n]; // dichiaro un array con taglia pari a n
  cout << "Inserisci una serie di " << n << " numeri: ";
  for(int i = 0; i < n; i++){  cin >> number; nxt[i] = number; } // utilizzo un for loop per mettere i numeri inseriti nell'array dichiarato in precedenza
  // dati raccolti!
  if(nxt[nxt[0] - 1] == k){ // controllo se il primo tentativo mi porta a trovare il poggiomarinese
    counter = 0;
    cout << counter << endl;
    exit(0); // funzione usata per interrompere tutto il programma
  }
  counter = 1; // si parte da uno considerando il primo tentativo
  int i = nxt[0] - 1; // l'indice iniziale, è pari al primo numero dell' array diminuito di 1 in modo da poter  essere usato come indice
  while(true){
    if(nxt[i] != k){ // se nel primo tentativo andiamo in una casa e non troviamo il poggimarinese, aggiungiamo 1 al counter dei tentativi
      counter++;
    }
    if(counter > n){ // il maggior numero di tentativi possibili per definizione è n, quindi se il numero di tentativi ha superato n, la polizia è entrata in loop infinito e non troverà il poggimarinese
      counter = -1;
      break;
    }else if(nxt[i] == k){ // appena trovi il poggimarinese aggiungi 1 e rompi il loop
      counter++;
      break;
    }
    i = nxt[i] - 1; // l'indice viene aggiornato perchè dopo aver chiesto del poggiomarinese, ci troveremo nella casa suggerita dal villico precedente
  }
  cout << counter << endl; // stampa il valore di count che a seconda di cosa è successo nella ricerca del poggimarinese cambierà da  -1 <= counter <= n (in N)
  return 0;
}