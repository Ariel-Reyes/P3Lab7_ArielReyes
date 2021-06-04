#include "Mago.hpp"

Mago::Mago()
{
}

Mago::~Mago()
{
}

 Mago::Mago(int astucia,int inteligencia,int lealtad,int valentia){
 	this->astucia = astucia; 
 	this->inteligencia = inteligencia; 
 	this->astucia = astucia;
 	this->lealtad = lealtad; 
 	this->valentia = valentia; 
 }; 


        
        void Mago::set_astucia(int x){
        	this->astucia = x; 
        	
		}; 
        int Mago::get_astucia(){
        	return this->astucia; 
		}; 
        
        void Mago::set_inteligencia(int x){
        	this->inteligencia = x; 
		};
        int Mago::get_inteligencia(){
        	return this->inteligencia; 
		}; 
        
        void Mago::set_lealtad(int x){
        	this->lealtad = x; 
		}; 
        int Mago::get_lealtad(){
        	return this->lealtad; 
		}; 
        
        void Mago::set_valentia(int x){
        	this->valentia = valentia; 
		};
        int Mago::get_valentia(){
        	return this->valentia;
		}; 
        
