#ifndef CLASEHOGWARTS_HPP
#define CLASEHOGWARTS_HPP
#include "Mago.hpp"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.hpp"
#include "MagoRavenclaw.hpp"
#include "MagoGryffindor.hpp"
#include <vector>
#include <iostream>
using namespace std; 

class ClaseHogwarts {
	private:
     vector<MagoGryffindor> mago_gryffindor; 
	 vector<MagoSlytherin> mago_slytherin; 
	 vector<MagoHufflepuff> mago_hufflepuff; 
	 vector<MagoRavenclaw> mago_ravenclaw;
	 int year; 
	  
 	 
	public:
		ClaseHogwarts();
		~ClaseHogwarts();
		
		void set_mago_gryffindor(MagoGryffindor x); 
		void set_mago_slytherin(MagoSlytherin x); 
		void set_mago_hufflepuff(MagoHufflepuff x); 
	    void set_mago_ravenclaw(MagoRavenclaw x); 
	    
	    vector<MagoGryffindor> get_mago_gryffindor();
	    vector<MagoSlytherin> get_mago_slytherin();
	    vector<MagoHufflepuff> get_mago_hufflepuff();
	    vector<MagoRavenclaw> get_mago_ravenclaw();

         void promedio_habilidades_por_casa();
         void set_year(int x); 
         int get_year(); 
  

	    


		

		

		
		


		
		
		
		
};

#endif