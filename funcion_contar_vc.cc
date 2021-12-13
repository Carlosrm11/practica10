#include "cabecera_contar_vc.h"

void contar(std::string fichero) {
  std::ifstream archivo;
  std::string buscador;
  int voc = 0;
  int cons = 0;
  archivo.open(fichero);

  while (!archivo.eof()) {
    std::getline(archivo,buscador);
    for (int i = 0; i < buscador.size(); i++) {
      if (buscador[i]!=' ') {
        if (buscador[i]=='a' || buscador[i]=='e' || buscador[i]=='i' || buscador[i]=='o' || buscador[i]=='u') {
        voc++;
        }
        else {
        cons++;
        }
      }
    }
  }
  std::cout << "total de consonante = " << cons << "\n";
  std::cout << "total de vocales = " << voc << "\n";
  archivo.close();
}