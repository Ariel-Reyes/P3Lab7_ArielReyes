#include "MagoRavenclaw.hpp"

MagoRavenclaw::MagoRavenclaw() {

	int as_rand = 0 + rand()%100;
	this->set_astucia(as_rand);
	int inte_rand = 80 + rand()%100;
	this->set_inteligencia(inte_rand);
	int leal_rand = 0 + rand()%100;
	this->set_lealtad(leal_rand);
	int va_rand = 0 + rand() %100;
	this->set_valentia(va_rand);
	int cre_rand = 80 + rand()%100;
	this->set_creatividad(cre_rand);


}

MagoRavenclaw::~MagoRavenclaw() {
}

void MagoRavenclaw::set_creatividad(int x) {
	this->creatividad = x;
};
int MagoRavenclaw::get_creatividad() {
	return this->creatividad;
};