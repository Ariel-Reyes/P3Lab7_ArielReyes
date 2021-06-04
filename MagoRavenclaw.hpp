#ifndef MAGORAVENCLAW_HPP
#define MAGORAVENCLAW_HPP
#include "Mago.hpp"

class MagoRavenclaw : public Mago {
	private:
		int creatividad;
	public:
		MagoRavenclaw();
		~MagoRavenclaw();
		void set_creatividad(int x);
		int get_creatividad();

};

#endif