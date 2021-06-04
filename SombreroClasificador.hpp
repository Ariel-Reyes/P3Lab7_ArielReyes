#ifndef SOMBREROCLASIFICADOR_HPP
#define SOMBREROCLASIFICADOR_HPP
#include "Mago.hpp"
#include "ClaseHogwarts.hpp"
#include <typeinfo>
#include <iostream>
#include "Mago.hpp"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.hpp"
#include "MagoRavenclaw.hpp"
#include "MagoGryffindor.hpp"
#include "ClaseHogwarts.hpp"
using namespace std; 
class SombreroClasificador
{ 

     
	public:
		SombreroClasificador();
		~SombreroClasificador();
		ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*> ma,int year);
        void imprimir_casa(vector<Mago*>); 
};

#endif