#include <iostream>
#include <string>
#include "Mago.hpp"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.hpp"
#include "MagoRavenclaw.hpp"
#include "MagoGryffindor.hpp"
#include "ClaseHogwarts.hpp"
#include "SombreroClasificador.hpp"
#include <vector>
using namespace std;
vector<Mago*> generar_magos();
ClaseHogwarts* a = new ClaseHogwarts(); 
ClaseHogwarts* b = new ClaseHogwarts(); 
int main() {
	srand(time(NULL));
	vector<Mago*> lista_mago = generar_magos();
	SombreroClasificador* sc = new SombreroClasificador();

//	ClaseHogwarts* a = sc->clasificar_magos_nuevos(lista_mago,2000);
	int opc=0; 
	while(opc!=4){
		cout<<"......... Menu.........."<<endl; 
		cout<<"1...............Imprimir por Casas"<<endl; 
		cout<<"2...............Separar por casa"<<endl; 
		cout<<"3...............Imprimir Promedio"<<endl; 
		cout<<"4...............Salir"<<endl; 
		cout<<"Ingrese la opcion que desea: "<<endl; 
		cin>>opc; 
		
		
		switch(opc){
			case 1:{
				sc->imprimir_casa(lista_mago); 
				break;
			}
			
			case 2:{
				int year; 
				cout<<"Ingrese el year: "<<endl;
				cin>>year; 
					ClaseHogwarts* a = sc->clasificar_magos_nuevos(lista_mago,year);
				
				
				break;
			}
			
			 case 3:{
		    // b->promedio_habilidades_por_casa(); 
			 }
			 
			 case 4:{
			 	cout<<"Adios"<<endl; 
				break;
			 }
			 
		}
		
		
	}
	




	return 0;
}

vector<Mago*> generar_magos() {
//	srand(time(NULL));
	int a=0;
	vector<Mago*> lista_mago;
	while(a<20) {


		double num_ra = rand()%100;

		num_ra /= 100;

		if(num_ra>=0 && num_ra<=0.25) {
			MagoSlytherin* ms = new MagoSlytherin();
			b->set_mago_slytherin(*ms); 
			lista_mago.push_back(ms);
		}

		if(num_ra>=0.25 && num_ra<=0.5) {
			MagoRavenclaw* mr = new MagoRavenclaw();
			lista_mago.push_back(mr);
			b->set_mago_ravenclaw(*mr); 
		}

		if(num_ra>=0.5 && num_ra<=0.75) {
			MagoHufflepuff* mh = new MagoHufflepuff();
			lista_mago.push_back(mh);
			b->set_mago_hufflepuff(*mh); 

		}

		if(num_ra>=0.75 && num_ra<=1) {
			MagoGryffindor* mg = new MagoGryffindor();
			lista_mago.push_back(mg); 
			b->set_mago_gryffindor(*mg); 
		}


		a++;
	}
	return lista_mago;

};
