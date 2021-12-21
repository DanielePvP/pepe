#include <iostream> 
#include <string> 
using namespace std;

void sumar(int &num1, int &num2){

  int total;

  total = num1 + num2;

  cout << total;

}

int main() {

  int numero1, numero2;

  cout << "Buenas eliga los numeros para sumar" << endl;
  cout << "Eliga el numero 1" << endl;
  
  cin >> numero1;

  cout << "Eliga el numero 2" << endl;

  cin >> numero2;

  cout << "El total es ";
  
  sumar(numero1,numero2);
ccc
  cout << endl;


return 0; 
}