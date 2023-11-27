#include "iostream"
#include "string"

int main(){
  using namespace std;
  int a, b, scelta;
  cout << "Inserisci due numeri separati da uno spazio: ";
  cin >> a >> b;
  std::string operazioni = "[0] Addizione\n[1] Sottrazione\n[2] Moltiplicazione\n[3] Divisione";
  cout << "Che operazione vuoi svolgere ?" << endl;
  cout << operazioni << endl;
  cin >> scelta;
  switch (scelta) {
  case 0:
    cout << "La somma è: " << a+b << endl;
    break;
  case 1:
    cout << "La sottrazione è: " << a-b << endl;
    break;
  case 2:
    cout << "La Moltiplicazione è: " << a*b << endl;
      break;
  case 3:
    cout << "La Divisione è: " << float(a)/float(b) << endl;
    break;
  }
}
