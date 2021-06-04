#ifndef MAGOHUFFLEPUFF_HPP
#define MAGOHUFFLEPUFF_HPP
#include "Mago.hpp"
class MagoHufflepuff : public Mago
{
	
	private: 
	int paciencia; 
	public:
		MagoHufflepuff();
		~MagoHufflepuff();
	
	void set_paciencia(int x); 
	int get_paciencia(); 
	
};

#endif