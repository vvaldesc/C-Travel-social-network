/*
	ESTRUCTURAS DE DATOS Y DE LA INFORMACIÓN
	Curso 2021/2022

	Nombre: RSV.h
	Descripción: Definición de la clase RSV Red Social de Viajes
	Autor:	Profesores de la asignatura
    Fecha:	7/03/2022
*/

#ifndef RSV_H_
#define RSV_H_
#include "lpi.h"
#include "Conductor.h"
#include <fstream>
class RSV {

	LPI<Conductor *> *lc;
	void cargarConductores();
public:
	RSV();
	void insertarInicio(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta);
	void insertarFinal(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta);
	void insertarOrden(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta);
	void mostrar();
	bool existe(string id);
	bool buscar(string id);




	~RSV();
};

#endif /* RSV_H_ */
