#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "EncomendaRelampago.hpp"

class EncomendaRelampago: public Encomenda{

	public:
	
            double taxa = 0.25;

            double calcula() override; // calcula o preço de uma encomenda normal levando em conta a taxa adicional da encomenda relâmpago;
        
            void print() override;

};

#endif
