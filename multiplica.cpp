#include <iostream>
using namespace std;

int mul(int x, int y) {
	if (y == 0){
		return y;
	}else{
		return x + mul(x, y -1 );
	}
}

int main (){
	int a, b, S;
	cout << "Factorial de un numero" << endl;
	cout << "Ingresa un numero"<< endl;
	cout << "Ingrese el multiplicando"<< endl;
	cin >> a;
	cout << "Ingrese el multiplicador"<< endl;
	cin >> b;
	S = mul(a, b);
	cout << "El resultado es: " << S << endl;
	return 0;
}