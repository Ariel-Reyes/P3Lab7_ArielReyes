#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "Mago.hpp"


class MagoSlytherin : public Mago {
	private:
		int liderazgo;
	public:
		MagoSlytherin();
		~MagoSlytherin();
		void set_liderazgo(int);
		int get_liderazgo();

};

#endif