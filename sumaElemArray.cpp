#include <iostream>
using namespace std;

int sum( int a[], int n) {
	if (n==0){
		return a[n];
	}else{
		return  a[n] + sum(a, n-1);
	}
}

int main (){
	int S;
	const int a= 5;
	int arreglo[a] = {1,2,3,4,10};
	cout << "Suma de elementos de un arreglo" << endl;
	S = sum(arreglo, a);
	cout << S << endl;
	return 0;
}	