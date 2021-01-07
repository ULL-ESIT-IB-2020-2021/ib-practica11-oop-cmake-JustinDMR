#include "date.h"
#include "tools.h"

int main(int argc, char* argv[]){
  std::ofstream file;
  Usage (argc, argv);
  if (argc <= 5){
    std::cout << "There is something missing for the correct execution." << std::endl; 
		std::cout << "Try: '" << argv[0] << " --help' for more information." << std::endl;
  }
  else {
    file.open(argv[5], std::ios::out); //This creates the .txt file
    if(file.fail()){
      std::cout << "There was an ERROR while creating the file.";
      exit (EXIT_SUCCESS);;
    }
    int day_ = atoi(argv[1]);
    int month_ = atoi(argv[2]);
    int year_ = atoi(argv[3]);
    int day_addition = atoi(argv[4]);
    Date hoy(day_,month_,year_,day_addition);
    hoy.decir(file);
    hoy.bisiesto(file);
    hoy.siguientes(file);
    file.close(); // This closes the .txt file 
  return 0;
  }
}