#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){
    return Encomenda::calcula();
}

void EncomendaNormal::print(){
    
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << this->peso << std::endl
    	        << "  Custo por kg: " << this->custoKg << std::endl
    		      << "  Custo total: " << this->total << std::endl;
}
