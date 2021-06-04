#ifndef MAGO_HPP
#define MAGO_HPP
#include <random>
#include <time.h>
class Mago
{
	
	private: 
	int astucia; 
	int inteligencia; 
	int lealtad; 
	int valentia; 
	
	public:
		Mago();
		~Mago();
        Mago(int astucia,int inteligencia,int lealtad,int valentia); 
        
        virtual void set_astucia(int); 
        virtual int get_astucia(); 
        
       virtual void set_inteligencia(int);
        virtual int get_inteligencia(); 
        
       virtual void set_lealtad(int); 
        virtual int get_lealtad(); 
        
       virtual void set_valentia(int);
       virtual int get_valentia(); 
        
        
        
};

#endif