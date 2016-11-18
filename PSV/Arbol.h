#ifndef _ARBOL_H_
#define _ARBOL_H_

#pragma once
#include "Estudiante.h"
#include "Estudiante.cpp"
#include <string>
struct nodo
{
	Estudiante value;
	nodo *izq;
	nodo *der;
};

class Arbol
{
public:
	nodo *root;
	void insertar(Estudiante, nodo *);
	nodo Existe(int carne, nodo *);
	void Votar(int voto, int carne, nodo*,string time,string capt);
	string Alumnos(nodo *);
	Arbol();
	~Arbol();
};

#endif 