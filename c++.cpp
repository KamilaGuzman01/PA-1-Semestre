/*
#include <iostream>

using namespace std;

double a;
double b;

int main() {
	cout << "Agrega un numero\n";
	cin >> a;
	cout << "Agrega otro numero\n";
	cin >> b;

	cout << "La suma es: " << a + b;
	cout << "La resta es:" << a - b;
	cout << "La multiplicacionn es:" << a * b;
	cout << "La division es:" << a / b; << "y el resto es:" << a % b;


	return 0;
}
*/

// Hallar el; porcentaje del producto

/*
#include <iostream>
using namespace std;

int p = 2000000
float d = 0.15;
int t = p*d;

int main(){

cout << "El precio del compu es: " << p << endl;
cout << "El descuento es : << t << endl;
cout << "El precio final es: " << p-t; 
return 0;
}

*/

// Con una variable de vaor 10 aumentar 5, reducir en 3, multiplicar por 2 y dividir entre 4


#include <iostream>

using namespace std;

int a = 10;

int main() {
	cout << "El valor de a es:" << a << endl;
	a += 5;
	cout << "El valor de a reduciso 3 es:" << a << endl;
	a -= 3;
	cout << "El valor de a multiplicado por 2 es:" << a << endl;
	a *= 2;
	cout << "El valor dividido entre 4 es:" << a << endl;
	return 0;
}