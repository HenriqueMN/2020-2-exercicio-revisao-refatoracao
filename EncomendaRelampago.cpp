#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "Cliente.hpp"

double EncomendaRelampago::calcula(){
    double x;
    
    x = Encomenda::calcula();
    x += x * this->taxa;

    return x;
}

void EncomendaRelampago::print(){

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << this->peso << std::endl
    		      << "  Custo por kg: " << this->custoKg << std::endl
    		      << "  Taxa adicional: " << this->taxa << std::endl
    		      << "  Custo total: " << this->total << std::endl;
}
