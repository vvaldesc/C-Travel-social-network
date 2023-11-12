//============================================================================
// Name        : main RSV.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "RSV.h"


using namespace std;


int main() {

	RSV *r=new RSV();
	r->mostrar();
	r->existe("LuisRo");
	return 0;
}
