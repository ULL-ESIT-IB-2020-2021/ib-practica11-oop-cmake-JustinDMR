#include "modificacion.h"

void Usage(int argc, char *argv[]) {
    if (argc == 2 && strcmp(argv[1], "--help") == 0){
        std::cout << "This programme uses the command line to be executed properly." << std::endl;
        std::cout << "You must introduce 4 numbers separated by spaces followed by the name of the '.txt' file." << std::endl; 
        std::cout << "The first number will be a numerator and the secon a denominator, same thing with the third and forth number." <<std::endl;
        std::cout << "Try this as an example: '"<< argv[0] << " 4 2 8 6 ExampleFile.txt'" << std::endl;
        exit (EXIT_SUCCESS);
    }
}