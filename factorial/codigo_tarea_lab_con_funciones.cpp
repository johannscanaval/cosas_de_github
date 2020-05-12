#include <iostream>
using namespace std;

long double factorial(int numero);
 
int main()
{
	cout<<"Apreciado usuario, por favor ingrese el numero del cual quiere saber el factorial.\nRecuerde que la precision maxima es de 1.1E4932. Perdon, limitaciones de la maquina :(\n";
	int ingreso=0;
	cin>>ingreso;
	long double fac=factorial(ingreso);
	cout<<"Apreciado usuario, el factorial de "<<ingreso<<" es: "<<fac<<". Que tenga un buen dia.\n";
	return 0;
}
long double factorial(int numero)
{
	long double factorial=1;
	for (int i=1; i<=numero; i++)
	{
		factorial=(factorial*i);
	}
	return factorial;
}
