#include<iostream>
usingnamespacestd;

int opcion,a,b,resultado;

voidMenu();
voidOperaciones(int);
voidSuma(int,int);
voidResta(int,int);
voidMultiplicacion(int,int);
voidDivision(int,int);

voidMenu(){
	cout<<"Calculadora:"<<endl;
	cout<<"1- Suma"<<endl;
	cout<<"2- Resta"<<endl;
	cout<<"3- Multiplicacion"<<endl;
	cout<<"4- Division"<<endl<<endl;
	cout<<"Opcion: "; cin >> opcion;
}

voidOperaciones(int opcion){
	cout << "ingrese dos numeros : " << endl;
	cin >>a>>b;
	switch (opcion){
	case1:
		Suma(a,b);
		break;
	case2:
		Resta(a,b);
		break;
	case3:
		Multiplicacion(a,b);
		break;
	case4:
		Division(a,b);
		break;
	}
}

voidSuma(int a, int b){
	cout << "El resultado de "<<a<<" + "<<b<<" = "<< a + b <<endl; 
}
voidResta(int a, int b){
	cout << "El resultado de "<<a<<" - "<<b<<" = "<< a - b <<endl; 
}
voidMultiplicacion(int a, int b){
	cout << "El resultado de "<<a<<" x "<<b<<" = "<< a * b <<endl; 
}
voidDivision(int a, int b){
	cout << "El resultado de "<<a<<" / "<<b<<" = "<< a / b <<endl; 
}


intmain(){
	Menu();
	Operaciones(opcion);
	return0;
}