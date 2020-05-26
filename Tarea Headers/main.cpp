#include <iostream>
#include <fstream>
#include "RungeKutta.h"
using namespace std;

int iteraciones = 25000;
double valores_de_inicio[2] = { 8.5, 20 };
double* rungekutta4(double t, double X[2]);

int main()
{
	double** Xlist = new double* [iteraciones+1];
	for (int index = 0; index < iteraciones+1; index++)
	{
		Xlist[index] = new double[2];
	}
	Xlist[0][0] = valores_de_inicio[0];
	Xlist[0][1] = valores_de_inicio[1];
	double* tiempo = new double[iteraciones+1];
	tiempo[0] = 0;
	ofstream salida_datos;
	salida_datos.open("datos.txt");
	for (int index = 0; index < iteraciones; index++)
	{		
		double* vec= new double[3];
		vec = rungekutta4(tiempo[index], Xlist[index]);
		if (vec[1] < 0)
		{
			break;
		}
		tiempo[index + 1] = vec[0]; cout << "Para el tiempo: " << vec[0] << " , la posición es: "; salida_datos << vec[0]<<" ";
		Xlist[index + 1][0] = vec[1]; cout << vec[1] << ". Y la velocidad es: "; salida_datos << vec[1] << " ";
		Xlist[index + 1][1] = vec[2]; cout << vec[2] << "." << endl; salida_datos << vec[2] <<endl;
	}
	salida_datos.close();
	return 0;
}

