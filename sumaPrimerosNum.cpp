#include <iostream>
using namespace std;

int sum (int numero) {
	if (numero == 0){
		return 0;
	}else{
		return numero + sum(numero - 1);
	}
}

int main (){
	int numero, S;
	cout << "Factorial de un numero" << endl;
	cout << "Ingresa un numero"<< endl;
	cin >> numero;
	S = sum(numero);
	cout << "El resultado es: " << S << endl;
	return 0;
}

