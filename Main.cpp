#include <iostream>
#include <math.h>

using namespace std;

int menu();
int factorial(int);

int main() {
	int resp;
	while (resp != 3) {
		resp = menu();
		if (resp == 1) {
			int resp2, numdeabajo = 1, cont2, poder = 1;
			double respTemp, respF = 0;
			cout << "Ingrese un numero." << endl;
			cin >> resp2;
			cont2 = 13;
			while (cont2 > 0) {
				respTemp = pow(resp2, poder) / factorial(numdeabajo);
				poder++;
				numdeabajo++;
				respF = respF + respTemp;
				cont2--;
			}
			respF = respF + 1;
			cout << "La respuesta es de: " << respF << endl;
		} else {
			int x1, x2, x3, x4, y1, y2, y3, y4;
			cout << "Ingrese x1" << endl;
			cin >> x1;
			cout << "Ingrese y1" << endl;
			cin >> y1;
			
		}
	}
	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Ejercicio 1\n";
	cout << "2) Ejercicio 2\n";
	cout << "3) Salir\n";
	int resp;
	cin >> resp;
	return resp;
}

int factorial(int i){
    if(i < 0){
        return 0;
    }else if(i == 0){
        return 1;
    }else{
        return i * factorial(i - 1);
    }
}
