#include<iostream>
#include <fstream>
#include <string>
#include "DatosEmpleados.h"
#include "administrador.h"
#include "Empleado.h"
#include "Almacen.h"
using namespace std;
int main();
void iniciaSesion()
{
	int usuario;
	string pass;
	cout<<"USUARIO:  ";
	cin>>usuario;
	cout<<"PASSWORD:  ";
	cin>>pass;
	if(usuario==101010 && pass=="administrador123")
	{
		Administrador admin;
		admin.mostrarMenu();
	}
	else
	{
		DatosEmpleado empleado1 = Archivo::leerEmpleados(usuario);
		if(pass == empleado1.getContraseña())
		{
			LEGCircular<Almacen> almacenes = Archivo::leerAlmacen();
			Empleado empleado;
			empleado.mostrarMenu();
		}
	}	
	main();
}

int main()
{
	iniciaSesion();
	system("pause");
	return 0;
}
