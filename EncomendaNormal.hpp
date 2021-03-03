#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	private:
        
		double calcula();

        	void print() override; // imprime os dados da encomenda, bem como seu tipo

};

#endif
