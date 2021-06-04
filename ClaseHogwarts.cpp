#include "ClaseHogwarts.hpp"

ClaseHogwarts::ClaseHogwarts()
{
}

ClaseHogwarts::~ClaseHogwarts()
{
}

	
		void ClaseHogwarts::set_mago_gryffindor(MagoGryffindor x){
			this->mago_gryffindor.push_back(x); 
		}; 
		void ClaseHogwarts::set_mago_slytherin(MagoSlytherin x){
			this->mago_slytherin.push_back(x); 
		}; 
		void ClaseHogwarts::set_mago_hufflepuff(MagoHufflepuff x){
			this->mago_hufflepuff.push_back(x);
		}; 
	    void ClaseHogwarts::set_mago_ravenclaw(MagoRavenclaw x){
	    	this->mago_ravenclaw.push_back(x); 
		}; 
	    
	    vector<MagoGryffindor> ClaseHogwarts::get_mago_gryffindor(){
	    	return this->mago_gryffindor; 
		};
	    vector<MagoSlytherin> ClaseHogwarts::get_mago_slytherin(){
	    	return this->mago_slytherin; 
		};
	    vector<MagoHufflepuff> ClaseHogwarts::get_mago_hufflepuff(){
	    	return this->mago_hufflepuff; 
		};
	    vector<MagoRavenclaw> ClaseHogwarts::get_mago_ravenclaw(){
	    	return this->mago_ravenclaw; 
		};

         void ClaseHogwarts::promedio_habilidades_por_casa(){
         	int acum_gryffindor=0;
         	int acum_hufflepuff=0; 
         	int acum_ravenclaw=0; 
         	int acum_slytherin=0; 
			 for(int i=0;i<mago_gryffindor.size();i++){
         		MagoGryffindor a = mago_gryffindor[i]; 
				 acum_gryffindor = a.get_astucia() + a.get_atrevimiento() + a.get_inteligencia() + a.get_valentia() + a.get_lealtad();
			 }
         	acum_gryffindor = acum_gryffindor/5; 
         	
         	for(int i=0;mago_hufflepuff.size();i++){
         		MagoHufflepuff a = mago_hufflepuff[i];
         		acum_hufflepuff = a.get_astucia() + a.get_inteligencia() + a.get_lealtad() + a.get_paciencia() + a.get_valentia(); 
         		
			 }
         	acum_hufflepuff = acum_hufflepuff/5; 
         	
         	for(int i=0;mago_ravenclaw.size();i++){
         		MagoRavenclaw b = mago_ravenclaw[i]; 
         	    acum_ravenclaw = b.get_astucia() + b.get_creatividad() + b.get_inteligencia() + b.get_lealtad() + b.get_valentia(); 
			 }
			 acum_ravenclaw = acum_ravenclaw/5; 
			 
			 for(int i=0;i<mago_slytherin.size();i++){
			 	MagoSlytherin a = mago_slytherin[i]; 
			 	acum_slytherin = a.get_astucia() + a.get_inteligencia() + a.get_lealtad() + a.get_liderazgo() + a.get_valentia(); 
			 }         	
			 
			 acum_slytherin = acum_slytherin / 5; 
			 
			 cout<<"........Promedios.........."<<endl; 
			 cout<<"Gryffindor-----------> "<<acum_gryffindor<<endl;
			 cout<<"Slytherin------------> "<<acum_slytherin<<endl; 
			 cout<<"Hufflepuff-----------> "<<acum_hufflepuff<<endl; 
			 cout<<"Ravenclaw------------> "<<acum_ravenclaw<<endl; 
			 
			 
         	
		 };
         void ClaseHogwarts::set_year(int x){
         	this->year = x; 
		 }; 
         int ClaseHogwarts::get_year(){
         	return this->year; 
		 }; 
  
       
