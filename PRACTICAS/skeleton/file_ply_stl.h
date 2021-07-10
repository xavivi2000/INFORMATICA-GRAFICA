/*
* Practicas de IG
* Domingo Martin Perandres© 2014-2020
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef _READ_PLY
#define _READ_PLY

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include "vertex.h"

class _file_ply
{
public:

  _file_ply(){};
  int open(const string &File_name);
  void read(vector<float> &Coordinates, vector<unsigned int> &Positions);

  //Funcion similar a read pero adaptada a leer plys que contienen la informacion del perfil de los plys que se construyen por rotacion
  void read_perfil(vector<float> &Coordinates, int &eje, int &giros);

  void close();

private:
  void get_token(std::istringstream &Line_stream1,std::string &Token1);
  bool get_new_line(std::ifstream &File,std::istringstream &Line_stream);

  std::ifstream File;
};

#endif
