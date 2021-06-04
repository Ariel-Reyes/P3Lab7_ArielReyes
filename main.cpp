#include <iostream>
#include <string>
#include "Mago.hpp"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.hpp"
#include "MagoRavenclaw.hpp"
#include "MagoGryffindor.hpp"
#include "ClaseHogwarts.hpp"
#include <vector>
using namespace std; 
vector<Mago*> generar_magos();
int main() {
	srand(time(NULL));
vector<Mago*> lista_mago = generar_magos();

	 

	return 0;
}

vector<Mago*> generar_magos(){
	srand(time(NULL));
		 double num_ra = rand()%100; 
	vector<Mago*> lista_mago;
	num_ra /= 100; 
	 
	 if(num_ra>=0 && num_ra<=0.25){
	 	MagoSlytherin* ms = new MagoSlytherin();
	 	lista_mago.push_back(ms); 
	 }
	 
	 if(num_ra>=0.25 && num_ra<=0.5){
	 	MagoRavenclaw* mr = new MagoRavenclaw(); 
	 	lista_mago.push_back(mr); 
	 }
	 
	 if(num_ra>=0.5 && num_ra<=0.75){
	 	MagoHufflepuff* mh = new MagoHufflepuff(); 
	 	lista_mago.push_back(mh); 
	 	
	 }
	 
	 if(num_ra>=0.75 && num_ra<=1){
	 	MagoGryffindor* mg = new MagoGryffindor();
	 }
	 
	 
	 
	
	return lista_mago; 
	
}; 
