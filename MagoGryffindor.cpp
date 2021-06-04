#include "MagoGryffindor.hpp"

MagoGryffindor::MagoGryffindor() {
	int va_rand = 80 + rand() %100;
	this->set_valentia(va_rand);
	int atrevimi_rand = 80 + rand() % 100;
	this->set_atrevimiento(atrevimi_rand);
	int leal_rand = 0 + rand()%100;
	this->set_lealtad(leal_rand);
	int inte_rand = 0 + rand()%100;
	this->set_inteligencia(inte_rand); 
	int rand_as = 0 + rand()%100; 
	this->set_astucia(rand_as);


}

MagoGryffindor::~MagoGryffindor() {
}

void MagoGryffindor::set_atrevimiento(int x) {
	this->atrevimiento = x;

};
int MagoGryffindor::get_atrevimiento() {
	return this->atrevimiento;
};