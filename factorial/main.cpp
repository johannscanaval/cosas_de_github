#include <iostream>
using namespace std;
 
int main()
{
	cout<<"Apreciado usuario, por favor ingrese el numero del cual quiere saber el factorial.\nRecuerde que la precision maxima es de 1.1E4932. Perdon, limitaciones de la maquina :(\n";
	int ingreso=0;
	cin>>ingreso;
	long double factorial=1;
	for (int i=1; i<=ingreso; i++)
	{
		factorial=(factorial*i);
	}
	cout<<"Apreciado usuario, el factorial de "<<ingreso<<" es: "<<factorial<<". Que tenga un buen dia.\n";
	return 0;

}

