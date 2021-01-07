#include <iostream>
#include <cstring>
#include <fstream>

class Date {
  private:
    int dia, mes, anio, repetition;
    int i = 1;
  public:
    Date(int, int, int, int);
    void decir(std::ofstream & file);
    void bisiesto(std::ofstream & file);
    void siguientes(std::ofstream & file);
};
Date::Date(int day, int month, int year, int repeat){
  dia = day;
  mes = month;
  anio = year;
  repetition = repeat;
}
void Date::decir(std::ofstream & file){
  file << "The date is: " << dia << "/" << mes << "/" << anio << std::endl;
}
void Date::bisiesto(std::ofstream & file){
  if(anio % 4 == 0){
      file << "It is a leap year" << std::endl << std::endl;
  }
  else{
    file << "It is not a leap year" << std::endl <<std::endl;
  }
}
void Date::siguientes(std::ofstream& file){
  file << "The following " << repetition << " days are: " << std::endl;
  file << "--------------------------" << std::endl;
  for(int i{0} ; i < repetition ; i++){
    dia = dia + 1;
    if(dia > 30){
      dia = 1;
      mes = mes + 1; 
    }
    if(mes > 12){
      mes = 1;
      anio = anio + 1;
    }
  file << dia << "/" << mes<< "/" << anio << std::endl;;
  }  
}