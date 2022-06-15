#include <iostream>
using namespace std;

int main() {
	int a,b,respuesta,opcion;
	
	cout << "Menu Calculadora :"<<endl;
	cout << "1 - Suma "<<endl;
	cout << "2 - Resta"<<endl;
	cout << "3 - Multiplicacion"<<endl;
	cout << "4 - division"<<endl;
	cout << "Ingrese una opcion : "; cin >> opcion;
	cout << endl ;
	if(opcion == 1){
		cout << "Ingrese el primer numero: "; cin >> a ;
		cout << endl << "Ingrese el segundo numero: "; cin >> b;
		respuesta = a + b;
		cout << endl <<"El resultado de "<<a<<" + "<<b<<" es : "<<respuesta;
		}else if(opcion == 2){
			cout << "Ingrese el primer numero: "; cin >> a ;
			cout << endl << "Ingrese el segundo numero: "; cin >> b;
			respuesta = a - b;
			cout << endl <<"El resultado de "<<a<<" - "<<b<<" es : "<<respuesta;
			}else if(opcion == 3){
				cout << "Ingrese el primer numero: "; cin >> a ;
				cout << endl << "Ingrese el segundo numero: "; cin >> b;
				respuesta = a * b;
				cout << endl <<"El resultado de "<<a<<" x "<<b<<" es : "<<respuesta;
				}else if(opcion == 4){
					cout << "Ingrese el primer numero: "; cin >> a ;
					cout << endl << "Ingrese el segundo numero: "; cin >> b;
					respuesta = a / b;
					cout << endl <<"El resultado de "<<a<<" / "<<b<<" es : "<<respuesta;
					}else{
						cout << "Esa opcion no es correcta ... " << endl;
					} 
	return 0;
}