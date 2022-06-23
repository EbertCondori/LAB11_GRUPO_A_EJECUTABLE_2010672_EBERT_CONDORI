#include <iostream>
#include <string>
using namespace std;


/*
//problema 1
struct Persona
{
	string nombre;
	string apellido;
	int dia;
	int mes;
};


int main()
{
	
	int n;
	Persona *lista = new Persona[50];
	cout<<"ingresar n estudiantes : ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout << "Ingrese datos de la persona " << i+1 << endl;
		cout<<"ingrese nombre : ";cin >> lista[i].nombre;
		cout<<"ingrese apellido paterno : ";cin >> lista[i].apellido;
		cout<<"ingrese dia de su cumpleanios : ";cin >> lista[i].dia;
		cout<<"ingrese mes de su clumpeanios : ";cin >> lista[i].mes;
		cout<<endl;
		
	}
	cout<<"estudiantes que cumplen en junio es "<<endl;
	for(int i=0;i<n;i++){
		if(lista[i].mes==6){
			cout<<"nombre : "<<lista[i].nombre<<endl;
		}
	}
	
	
	return 0;
}
*/

/*
//problema 2
struct Persona
{
	string nombre;
	char grupo;
	int nota1;
	int nota2;
	int nota3;
	int nota4;
};

int main(){
	
	Persona *lista = new Persona[50];
	int n;
	cout<<"ingresar n estudiantes : ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout << "Ingrese datos de la persona " << i+1 << endl;
		cout<<"ingrese nombre : ";cin >> lista[i].nombre;
		cout<<"ingrese grupo : ";cin >> lista[i].grupo;
		cout<<"ingrese nota fase 1 : ";cin >> lista[i].nota1;
		cout<<"ingrese nota fase 2 : ";cin >> lista[i].nota2;
		cout<<"ingrese nota fase 3 : ";cin >> lista[i].nota3;
		cout<<"ingrese nota fase 4 : ";cin >> lista[i].nota4;
		cout<<endl;
		
	}
	cout<<"registro de los estudiante con su nota final "<<endl;
	for (int i=0; i<n; i++)
	{
		float notaf;
		cout<<" nombre : ";cout<<lista[i].nombre<<endl;
		cout<<" grupo : ";cout<<lista[i].grupo<<endl;
		
		notaf= (lista[i].nota1*15/100)+ (lista[i].nota2*20/100) + (lista[i].nota3*25/100 )+ ( lista[i].nota4*40/100 );
		cout<<" nota final es  : "<<notaf<<endl;
		
		cout<<endl;
		
	}
	
}
*/

/*

//ejercicio 3
struct Persona
{
	string nombre;
	int edad;
	float talla;
	
};


bool imprimir(int edad ,float talla){
	if(edad < 20 && talla > 1.7){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Persona *lista = new Persona[50];
	int n;
	cout<<"ingre n estudiantes : ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingresando estudiante "<<n<<" : "<<endl;
		cout<<"ingrese nombre : ";cin>>lista[i].nombre;
		cout<<"ingrese edad : ";cin>>lista[i].edad;
		cout<<"ingrese talla : ";cin>>lista[i].talla;
		cout<<endl;
	}
	
	cout<<"lista de estudiantes edad es mayor 20 y la talla a 1.70 : "<<endl;
	for(int i=0;i<n;i++){
		if(imprimir(lista[i].edad,lista[i].talla)==true){
			cout<<"nombre "<<lista[i].nombre;
		}
		
	}
	
}
*/

//ejercicio 4
struct Persona
{
	string nombre;
	string sexo;
	float sueldo;
	
};


bool imprimir(int edad ,float talla){
	if(edad < 20 && talla > 1.7){
		return true;
	}
	else{
		return false;
	}
}
	
	int main(){
		Persona *lista = new Persona[50];
		int n;
		cout<<"ingre n trabajadores : ";cin>>n;
		for(int i=0;i<n;i++){
			cout<<endl;
			cout<<"ingresando trabajador "<<i+1<<" : "<<endl;
			cout<<"ingrese nombre : ";cin>>lista[i].nombre;
			cout<<"ingrese sexo : ";cin>>lista[i].sexo;
			cout<<"ingrese sueldo : ";cin>>lista[i].sueldo;
			cout<<endl;
		}
		
		int mayor=0;
		int menor;
		cout<<"lista de trabajadores que tienen mayor y menor sueldo : "<<endl;
		for(int i=0;i<n;i++){
			if(lista[i].sueldo>mayor){
				mayor=lista[i].sueldo;
			}
		}
		for(int i=0;i<n;i++){
			if(i==0){
				menor=lista[i].sueldo;
			}
			else{
				if(lista[i].sueldo<menor){
					menor=lista[i].sueldo;
				}
			}
		}
		cout<<"mayor sueldo es : "<<mayor<<endl;
		cout<<"menor sueldo es : "<<menor<<endl;
		
	}
