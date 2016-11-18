#ifndef _ARBOLP_H_
#define _ARBOLP_H_

#pragma once
#include "Planilla.h"
#include "Planilla.cpp"

struct nodoP
{
	Planilla value;
	nodoP *izq;
	nodoP *der;
};

class ArbolP
{
public:
	nodoP *root;
	void insertar(Planilla, nodoP *);
	nodoP Existe(int id, nodoP *);
	nodoP Existe(string nombre, nodoP *);
	nodoP Votar(string planilla, nodoP*);
	string Conteo(nodoP *);
	string Ganador(nodoP *);
	ArbolP();
	~ArbolP();
};

#endif 