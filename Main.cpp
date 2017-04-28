#include <iostream>
#include <math.h>

using namespace std;

int menu();
int factorial(int);

int main() {
	int resp;
	while (resp =! 3) {
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
			double h1,h2,h3,h4, HB, ha1, hb1, hc1, ha2, hb2, hc2, semip;

			cout << "Ingrese x1:" << endl;
			cin >> x1;
			cout << "Ingrese y1:" << endl;
			cin >> y1;

			cout << "Ingrese x2:" << endl;
			cin >> x2;
			while (x2 == x1 || x2 < x1) {
				cout << "Numero invalido, ingrese x2 de nuevo:" << endl;
				cin >> x2;
			}
			cout << "Ingrese y2" << endl;
			cin >> y2;
			while (y2 == y1) {
				cout << "Numero invalido, ingrese y2 de nuevo:" << endl;
				cin >> y2;
			}

			cout << "Ingrese x3:" << endl;
			cin >> x3;
			while (x3 == x1 || x3 == x2) {
				cout << "Numero invalido, ingrese x3 de nuevo:" << endl;
				cin >> x3;
			}
			cout << "Ingrese y3" << endl;
			cin >> y3;
			while ((y3 == y1 || y3 == y2) && (y3 < y1 || y3 < y2)) {
				cout << "Numero invalido, ingrese y3 de nuevo:" << endl;
				cin >> y3;
			}

			cout << "Ingrese x4:" << endl;
			cin >> x4;
			while (x4 == x1 || x4 == x2 || x4 == x3) {
				cout << "Numero invalido, ingrese x4 de nuevo:" << endl;
				cin >> x4;
			}
			cout << "Ingrese y4" << endl;
			cin >> y4;
			while ((y4 == y1 || y4 == y2 || y4 == y3) && (y4 < y1 || y4 < y2)) {
				cout << "Numero invalido, ingrese y4 de nuevo:" << endl;
				cin >> y4;
			}

			h1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
			h2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
			h3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
			h4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
			HB = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

			double a = h4, b = h1, c = HB;

			semip = a + b + c / 2;

			ha1 = (2 / a) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));
			hb1 = (2 / b) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));
			hc1 = (2 / c) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));

			a = h3;
			b = h2;

			semip = a + b + c / 2;

			ha2 = (2 / a) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));
			hb2 = (2 / b) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));
			hc2 = (2 / c) * (sqrt(semip * (semip - a) * (semip - b) * (semip - c)));
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
