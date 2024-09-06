#include <iostream>
using namespace std;

int factorial (int numero) {
	if (numero == 0){
		return 1;
	}else{
		return numero * factorial(numero - 1);
	}
}

int main (){
	int numero, S;
	cout << "Factorial de un numero" << endl;
	cout << "Ingresa un numero"<< endl;
	cin >> numero;
	S = factorial(numero);
	cout << "El resultado es: " << S << endl;
	return 0;
}

