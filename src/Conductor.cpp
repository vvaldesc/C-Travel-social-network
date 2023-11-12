/*
	ESTRUCTURAS DE DATOS Y DE LA INFORMACIÓN
	Curso 2021/2022

	Nombre: Conductor.cpp
	Descripción: Definición de la clase Conducor
	Autor:	Profesores de la asignatura
    Fecha:	7/03/2022
*/
#include "Conductor.h"

Conductor::Conductor() {
	this->id="";
	this->nombre="";
	this->edad=0;
	this->cocheMarcaModelo="";
	this->anoDeAlta=0;
}

Conductor::Conductor(string id, string nombre, int edad,
		string cocheMarcaModelo, int anoDeAlta) {
	this->id=id;
	this->nombre=nombre;
	this->edad=edad;
	this->cocheMarcaModelo=cocheMarcaModelo;
	this->anoDeAlta=anoDeAlta;
}

string Conductor::getId() {
	return this->id;
}

string Conductor::getNombre() {
	return this->nombre;
}

int Conductor::getEdad() {
	return this->edad;
}

string Conductor::getCocheMarcaModelo() {
	return this->cocheMarcaModelo;
}

int Conductor::getAnoDeAlta() {
	return this->anoDeAlta;
}

void Conductor::setId(string id) {
	this->id=id;
}

void Conductor::setNombre(string nombre) {
	this->nombre=nombre;
}

void Conductor::setEdad(int edad) {
	this->edad=edad;
}

void Conductor::setCocheMarcaModelo(string cocheMarcaModelo) {
	this->cocheMarcaModelo=cocheMarcaModelo;
}

void Conductor::setAnoDeAlta(int anoDeAlta) {
	this->anoDeAlta=anoDeAlta;
}

Conductor::~Conductor() {
	// Desaparece el conductor, desaparecen sus opiniones
}
