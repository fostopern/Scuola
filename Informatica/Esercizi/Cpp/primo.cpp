#include "iostream"
int main(){
    using namespace std;
    unsigned int n;
    cout<<"Inserisci un numero intero positivo: ";
    cin>>n;
    bool primo = true;
    if(n<=2){
      cout<<n<<" è primo"<<endl;
    }
    for(int i = 2; i < n; i++){
      if(n % i == 0){
        primo = false;
        break;
      }
    }
    if(primo){
      cout<<n<<" é primo";
    } else {
        cout<<n<<" non é primo";
      }
    return 0;
}
