#include <iostream>
using namespace std;

int com(int n, int k) {
	if (n == k){
		return 1;
	}else{
		if (k == 1) {
			return n;
		} else {
			return com(n - 1, k -1) + com(n-1, k);
		}
	}
}

int main (){
	int n, k, S;
	cout << "Combinatoria de un numero" << endl;
	cout << "Ingresa un numero"<< endl;
	cin >> n;
	cin >> k;
	S = com(n,k);
	cout << "El resultado es: " << S << endl;
	return 0;
}

