#include <iostream>
#include <cstring>
#include <fstream>

void Usage(int argc, char *argv[]);

class racional{
    private:
        int nume1, deno1, nume2, deno2;
        int sumsubtdeno, sumnume, subtnume, mulnume, muldeno, divnume, divdeno, medianume, mediadeno;
    public:
        racional(int,int,int,int);
        void mostrarfraccion(std::ofstream& file);
        void suma(std::ofstream& file);
        void resta(std::ofstream& file);
        void multi(std::ofstream& file);
        void div(std::ofstream& file);
        void media(std::ofstream& file);
};
racional::racional(int nume1_,int deno1_,int nume2_,int deno2_){
    nume1 = nume1_;
    deno1 = deno1_;
    nume2 = nume2_;
    deno2 = deno2_;
    sumsubtdeno = deno1_ * deno2_;
}
void racional::mostrarfraccion(std::ofstream & file){
    file << nume1 << "/" << deno1 << "   " << nume2 << "/" << deno2 << std::endl;
    file << "------------------" << std::endl;
}
void racional::suma(std::ofstream & file){
    sumnume = deno2 * nume1 + deno1 * nume2;
    file << nume1 << "/" << deno1 << " + " << nume2 << "/" << deno2 << " = " << sumnume << "/" << sumsubtdeno << std::endl;
}
void racional::resta(std::ofstream & file){
    subtnume = deno2 * nume1 - deno1 * nume2;
    file << nume1 << "/" << deno1 << " - " << nume2 << "/" << deno2 << " = " << subtnume << "/" << sumsubtdeno << std::endl;
}
void racional::multi(std::ofstream & file){
    mulnume = nume1 * nume2;
    muldeno = deno1 * deno2;
    file << nume1 << "/" << deno1 << " * " << nume2 << "/" << deno2 << " = " << mulnume << "/" << muldeno << std::endl;
}
void racional::div(std::ofstream & file){
    divnume = nume1 * deno2;
    divdeno = deno1 * nume2;
    file << nume1 << "/" << deno1 << " / " << nume2<< "/" << deno2 << " = " << divnume << "/" << divdeno << std::endl;
}
void racional::media(std::ofstream & file){ 
    medianume = (nume1 + nume2) / 2;
    mediadeno = (deno1 + deno2) / 2;
    file << "la media de los numeradores es: " << medianume << std::endl;
    file << "la media de los denominadores es: " << mediadeno << std::endl;
}
