#ifndef MAGOGRYFFINDOR_HPP
#define MAGOGRYFFINDOR_HPP
#include "Mago.hpp"
class MagoGryffindor : public Mago {

	private:
		int atrevimiento;

	public:
		MagoGryffindor();
		~MagoGryffindor();
		void set_atrevimiento(int x);
		int get_atrevimiento();
};

#endif