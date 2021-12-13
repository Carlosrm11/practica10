/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contar.cc
  * @author Carlos Ravina Morales alu0101424170@ull.edu.es
  * @date 13/11/2021
  * @brief Escriba un programa que imprima en pantalla la palabra con mayor número de vocales y la palabra con el mayor número de consonantes 
  *        (independientemente de si se trata de mayúsculas o minúsculas) que se encuentren en el fichero de texto que se le pase como parámetro.
*/
#include "cabecera_contar_vc.h"

int main(int argc, char *argv[]) {
  std::string fichero = argv[1];
  contar(fichero);
  return 0;
}