#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

			std::string nome;
			std::string endereco;
			std::string cidade;
			std::string estado;
			std::string cep;
	
	private:
				
			void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
