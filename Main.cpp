#include <iostream>
#include <math.h>

using namespace std;

int menu();
int factorial(int);

int main() {
	int resp = menu();
	while (resp != 3) {
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
		} else if(resp == 2){
			int x1, x2, x3, x4, y1, y2, y3, y4;
			double h1,h2,h3,h4, HB, ha1, hb1, hc1, ha2, hb2, hc2, semip1, semip2, peri1, peri2, Area;

			cout << "Ingrese x1:" << endl;
			cin >> x1;
			cout << "Ingrese y1:" << endl;
			cin >> y1;

			cout << "Ingrese x2:" << endl;
			cin >> x2;
			cout << "Ingrese y2" << endl;
			cin >> y2;
			while (x2 == x1 && y2 == y1) {
				cout << "Numeros invalidos, ingrese numeros de nuevo:" << endl;
				cout << "Ingrese x2:" << endl;
				cin >> x2;
				cout << "Ingrese y2" << endl;
				cin >> y2;
			}

			cout << "Ingrese x3:" << endl;
			cin >> x3;
			cout << "Ingrese y3" << endl;
			cin >> y3;
			while (((x3 == x1 && y3 == y1) || (x3 == x2 && y3 == y2)) || (y3 < y2 || y3 < y1)) {
				cout << "Numeros invalidos, ingrese numeros de nuevo:" << endl;
				cout << "Ingrese x3:" << endl;
				cin >> x3;
				cout << "Ingrese y3" << endl;
				cin >> y3;
			}

			cout << "Ingrese x4:" << endl;
			cin >> x4;
			cout << "Ingrese y4" << endl;
			cin >> y4;
			while (((x4 == x1 && y4 == y1) || (x4 == x2 && y4 == y2) || (x4 == x3 && y4 == y3)) || (y4 < y2 || y4 < y2)) {
				cout << "Numeros invalidos, ingrese numeros de nuevo:" << endl;
				cout << "Ingrese x4:" << endl;
				cin >> x4;
				cout << "Ingrese y4" << endl;
				cin >> y4;
			}

			h1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
			h2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
			h3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
			h4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
			HB = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

			double a = h4, b = h1, c = HB;

			semip1 = (a + b + c) / 2;
			peri1 = a + b + c;

			ha1 = (2 / a) * (sqrt(semip1 * (semip1 - a) * (semip1 - b) * (semip1 - c)));
			hb1 = (2 / b) * (sqrt(semip1 * (semip1 - a) * (semip1 - b) * (semip1 - c)));
			hc1 = (2 / c) * (sqrt(semip1 * (semip1 - a) * (semip1 - b) * (semip1 - c)));

			a = h3;
			b = h2;

			semip2 = (a + b + c) / 2;
			peri2 = a + b + c;

			ha2 = (2 / a) * (sqrt(semip2 * (semip2 - a) * (semip2 - b) * (semip2 - c)));
			hb2 = (2 / b) * (sqrt(semip2 * (semip2 - a) * (semip2 - b) * (semip2 - c)));
			hc2 = (2 / c) * (sqrt(semip2 * (semip2 - a) * (semip2 - b) * (semip2 - c)));

			Area = ((HB * hc1) / 2) + ((HB * hc2) / 2);

			cout << "Los lados del trapeziode miden: " << endl;
			cout << "Lado1: " << h1 << endl;
			cout << "Lado2: " << h2 << endl;
			cout << "Lado3: " << h3 << endl;
			cout << "Lado4: " << h4 << endl;
			cout << endl;
			cout << "Los lados del primer triangulo son: " << endl;
			cout << "Lado1: " << ha1 << endl;
			cout << "Lado2: " << hb1 << endl;
			cout << "Lado3: " << hc1 << endl;
			cout << endl;
			cout << "Los lados del segundo triangulo son: " << endl;
			cout << "Lado1: " << ha2 << endl;
			cout << "Lado2: " << hb2 << endl;
			cout << "Lado3: " << hc2 << endl;
			cout << endl;
			cout << "Semiperimetro triangulo 1: " << semip1 << endl;
			cout << "Semiperimetro triangulo 2: " << semip2 << endl;
			cout << "Perimetro triangulo 1: " << peri1 << endl;
			cout << "Perimetro triangulo 2: " << peri2 << endl;
			cout << endl;
			cout << "Las alturas del triangulo 1 son: " << endl;
			cout << "Altura 1: " << ha1 << endl;
			cout << "Altura 2: " << hb1 << endl;
			cout << "Altura 3: " << hc1 << endl;
			cout << endl;
			cout << "Las alturas del triangulo 2 son: " << endl;
			cout << "Altura 1: " << ha2 << endl;
			cout << "Altura 2: " << hb2 << endl;
			cout << "Altura 3: " << hc2 << endl;
			cout << endl;
			cout << "El area es de: " << Area << endl;
		} else {
		}
		cout << endl;
		resp = menu();
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
