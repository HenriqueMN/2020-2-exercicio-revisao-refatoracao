#include <iostream>
#include <string>
#include "Encomenda.hpp"

double Encomenda::calcula(){
    double x;

    x = this->peso * this->custoKg;

    return x;
}

void Encomenda::print(){

    std::cout << "[Remetente]" << std::endl;
    this->remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    this->dest.print();
}
