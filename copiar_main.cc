/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file cripto.cc
  * @author Carlos Ravina Morales alu0101424170@ull.edu.es
  * @date 13/11/2021
  * @brief Desarrolle un programa que copie un fichero de texto en otro añadiendo al principio de cada línea el número de la misma. 
  *        Ambos ficheros serán idénticos salvo que el de salida contiene al principio de cada línea el número de la misma.
*/

#include "cabecera_copiar.h"

int main(int argc, char *argv[]) {
  std::string fichero = argv[1];
  copiar(fichero);
  return 0;
}

