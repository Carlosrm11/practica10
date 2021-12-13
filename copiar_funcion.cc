#include "cabecera_copiar.h"

void copiar(std::string fichero) {
  std::string linea;
  int num_linea = 1;
  std::ifstream entrada(fichero);
  std::ofstream salida_ordenada ("salida_ordenada.txt");
 
  if (salida_ordenada.is_open()) {
    if (entrada.is_open()) {
      while (!entrada.eof()) {
        std::getline(entrada,linea);
        salida_ordenada << num_linea ;
        salida_ordenada << linea << std::endl;
        num_linea ++;
      }
      entrada.close();
    }
    else {
      std::cout << "No se abre";
    }
    salida_ordenada.close();
    }
    else {
    std::cout << "No se crea";
  }
}