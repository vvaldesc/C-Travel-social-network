/*
	ESTRUCTURAS DE DATOS Y DE LA INFORMACIÓN
	Curso 2021/2022

	Nombre: RSV.cpp
	Descripción: Implementación de la clase RSV Red Social de Viajes
	Autor:	Profesores de la asignatura
    Fecha:	7/03/2022
*/

#include "RSV.h"

RSV::RSV() {
	lc = new LPI<Conductor*>;
	cargarConductores();
}


void RSV::cargarConductores() {
	ifstream ifs;
	string id,nombre,cocheMarcaModelo,edad,anoDeAlta;
	int intedad=0,intanoDeAlta=0;
	ifs.open("conductores.csv");
	if(ifs.is_open()){
	while(!ifs.eof()){
		getline(ifs,id,';');
		if(!ifs.eof()){
		getline(ifs,nombre,';');
		getline(ifs,edad,';');
		getline(ifs,cocheMarcaModelo,';');
		getline(ifs,anoDeAlta);
		//Conductor *c=new Conductor(id,nombre,edad,cocheMarcaModelo,anoDeAlta);
		intedad=atoi(edad.c_str());
		intanoDeAlta=atoi(anoDeAlta.c_str());

		insertarFinal(id,nombre,intedad,cocheMarcaModelo,intanoDeAlta);
		}

	}
	}
	else{
		cout << "el fichero no se ha abierto." << endl;
	}
}

void RSV::insertarInicio(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta) {
	Conductor *c=new Conductor(id,nombre,edad,cocheMarcaModelo,anoDeAlta);
	lc->moverInicio();
	lc->insertar(c);

}

void RSV::insertarFinal(string id,string nombre,int edad,string cocheMarcaModelo,int anoDeAlta) {
	Conductor *c=new Conductor(id,nombre,edad,cocheMarcaModelo,anoDeAlta);
	lc->moverUltimo();
	lc->avanzar();
	lc->insertar(c);
}

void RSV::insertarOrden(string id, string nombre, int edad,
		string cocheMarcaModelo, int anoDeAlta) {
	Conductor *c=new Conductor(id,nombre,edad,cocheMarcaModelo,anoDeAlta);
	lc->moverInicio();
	Conductor *caux;
	bool bandera=false;
	while(!lc->vacia() and !bandera){
		lc->consultar(caux);
		if(caux->getId()<id){
			bandera=true;
			lc->insertar(c);
		}
		if(caux->getId()==id){
			bandera=true;
			cout << "Ya existe el mismo id" << endl;
		}
		if(caux->getId()>id){
		lc->avanzar();
		}
	}
}



void RSV::mostrar() {
	Conductor *c;
	lc->moverInicio();
	while(!lc->enFin()){
		lc->consultar(c);
		cout << c->getId() << " " << c->getNombre() << " " << c->getEdad() << " " << c->getCocheMarcaModelo() << " " << c->getAnoDeAlta() << endl;
		lc->avanzar();
	}
}

bool RSV::existe(string id) {
	lc->moverInicio();
	Conductor *caux;
	bool bandera=false;
	while(!lc->vacia() and !bandera){
		lc->consultar(caux);
		if(caux->getId()==id){
			bandera=true;
			cout << "Ya existe el mismo id" << endl;
		}
		else{
		lc->avanzar();
		}
	}
	return bandera;
}

RSV::~RSV() {
	Conductor *c;
	lc->moverInicio();
	while(!lc->vacia()){
		lc->consultar(c);
		delete c;
		lc->borrar();
	}
	delete lc;
}
