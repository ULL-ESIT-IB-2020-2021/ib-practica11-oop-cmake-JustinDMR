#include "racional.h"
#include "tools.h"

int main(int argc, char* argv[]){
    std::ofstream file;
    int nume1_, deno1_, nume2_, deno2_;
    Usage (argc, argv);
    if (argc <= 5){
        std::cout << "There is something wrong with what you are writing." << std::endl; 
        std::cout << "Try: '" << argv[0] << " --help' for more information." << std::endl;
    }
    else {
        file.open(argv[5],std::ios::out);
        if(file.fail()){
            std::cout << "There was an ERROR while creating the file."<< std::endl;
            exit (EXIT_SUCCESS);;
        }
        int nume1_ = atoi(argv[1]);
        int deno1_ = atoi(argv[2]);
        int nume2_ = atoi(argv[3]);
        int deno2_ = atoi(argv[4]);
        if (deno1_ == 0){
            std::cout<< "You used '0' as a denominator, please change this as you can not do this operation." << std::endl;
            exit (EXIT_SUCCESS); 
        }
        if (deno2_ == 0){
            std::cout << "You used '0' as a denominator, please change this as you can not do this operation." << std::endl;
            exit (EXIT_SUCCESS); 
        }
        racional fracciones(nume1_, deno1_, nume2_, deno2_);
        fracciones.mostrarfraccion(file);
        fracciones.suma(file);
        fracciones.resta(file);
        fracciones.multi(file);
        fracciones.div(file);
        file.close();
        return 0;
    }
}