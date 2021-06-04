#include "MagoHufflepuff.hpp"

MagoHufflepuff::MagoHufflepuff() {
	srand(time(NULL));
	int as_rand = 0 + rand()%100;
	this->set_astucia(as_rand);
	int inte_rand = 0 + rand()%100;
	this->set_inteligencia(inte_rand);
	int leal_rand = 80 + rand()%100;
	this->set_lealtad(leal_rand);
	int paz_rand = 80 + rand()%100; 
	this->set_paciencia(paz_rand);
	int va_rand = 0 + rand() %100; 
	this->set_valentia(va_rand); 

}

MagoHufflepuff::~MagoHufflepuff() {

}

void MagoHufflepuff::set_paciencia(int x) {
	this->paciencia = x;
};
int MagoHufflepuff::get_paciencia() {
	return this->paciencia;
};