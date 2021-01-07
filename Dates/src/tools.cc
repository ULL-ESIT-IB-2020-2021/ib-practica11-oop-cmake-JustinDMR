#include "tools.h"

void Usage(int argc, char *argv[]) {
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout << "For this programme to be executed properly, you must wright the following in the command line: \n"
    "A day, a month and a year. All separated by a space and in numbers. \n"
    "After that, please wright how many following days you want to see and the name of the '.txt' file." << std::endl << std::endl;
    std::cout << "Try this as an example: '" << argv[0] << " 14 04 2002 10 DateExample.txt'"<< std::endl;
    exit (EXIT_SUCCESS);
  }
}