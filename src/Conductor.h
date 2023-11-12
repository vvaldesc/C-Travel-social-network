/*
	ESTRUCTURAS DE DATOS Y DE LA INFORMACIÓN
	Curso 2021/2022

	Nombre: Conductor.h
	Descripción: Definición de la clase Conducor
	Autor:	Profesores de la asignatura
    Fecha:	7/03/2022
*/

#ifndef CONDUCTOR_H_
#define CONDUCTOR_H_
#include <iostream>
using namespace std;

class Conductor {
	string id;
	string nombre;
	int edad;
	string cocheMarcaModelo;
	int anoDeAlta;

public:
	Conductor(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta);
	Conductor();

	string getId();
	string getNombre();
	int getEdad();
	string getCocheMarcaModelo();
	int getAnoDeAlta();

	void setId(string id);
	void setNombre(string nombre);
	void setEdad(int edad);
	void setCocheMarcaModelo(string cocheMarcaModelo);
	void setAnoDeAlta(int anoDeAlta);


	~Conductor();
};

#endif /* CONDUCTOR_H_ */
