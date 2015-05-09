#include <cstdlib>
#include <iostream>

/* Trabajo Practico TP3
Se necesita hacer un programa que
por funciones calcule el 
perimetro de un Recangulo.

Alumno: Adriel CHAMBI
Algoritmos y estructura de datos
Ciclo Lectivo 2015
*/
using namespace std;

double IngresoMayorCero(){
	double ParametroDato;
	bool DatoCorrecto;
	do{
		cin>>ParametroDato;
		
		if (ParametroDato <= 0) {
			cout<<endl<<"No puede ingresar 0 ni menor que 0"<<endl;
			cout<<"Ingrese nuevamente el Dato: ";
			DatoCorrecto = false;
		}
		else {
			DatoCorrecto = true;
		}
		
	} while (DatoCorrecto == false);
	
	return ParametroDato;
}

void MostrarPerimetro(double P_Altura,double P_Ancho){
    cout<<endl<<"El perimetro es "<<P_Altura + P_Ancho<<endl<<endl;
}

double IngresoDato(string Lectura){
	cout<<"Ingrese la "<<Lectura<<": ";
	return IngresoMayorCero();
}

int main(int argc, char *argv[])
{
    double Altura = IngresoDato("Altura");
    double Ancho = IngresoDato("Ancho");
    MostrarPerimetro(Altura,Ancho);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
