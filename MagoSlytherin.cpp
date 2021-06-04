#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin(){
	  
	    int as_rand = 80 + rand()%100; 
	    this->set_astucia(as_rand);
	    int inte_rand = 0 + rand()%100;
		this->set_inteligencia(inte_rand); 
		int leal_rand = 0 + rand()%100; 
		this->set_lealtad(leal_rand); 
		int lide_rand = 80 + rand()%100; 
		this->set_liderazgo(lide_rand);
		int va_rand = 0 + rand() %100; 
		this->set_valentia(va_rand); 

	
	
}

MagoSlytherin::~MagoSlytherin()
{
}

void MagoSlytherin::set_liderazgo(int x){
	this->liderazgo = x; 
};
		int MagoSlytherin::get_liderazgo(){
			return this->liderazgo; 
		};  