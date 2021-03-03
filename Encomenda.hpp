#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente dest;
        
        	virtual double calcula(); // calcula o preço de uma encomenda normal
        		
		virtual void print(); // imprime os dados do remetente e do destinatário da encomenda
};

#endif
