#include "stdafx.h"
#include "Arbol.h"
#include <cstdio>
#include <array>
#include <string>
using namespace System::Runtime::InteropServices;

Arbol::Arbol()
{
	root = NULL;
}

Arbol::~Arbol()
{
}
string cadena = "";
string Arbol::Alumnos(nodo *actual) {
	if (actual)
	{
		if (!actual->value.voto)
		{
			cadena += " " + (actual->value.nombre) + " " + (actual->value.Apellido) + ";";
		}
		if (actual->izq) {
			Alumnos(actual->izq);
		}
		if (actual->der) {
			Alumnos(actual->der);
		}
	}
	return cadena;
}
void Arbol::Votar(int voto, int carne, nodo*nodoN,string time, string capt)
{
	if (nodoN->value.carne == carne)
	{
		nodoN->value.voto = voto;
		nodoN->value.horaVoto = time;
		nodoN->value.password = capt;
	}
	else if (carne > nodoN->value.carne)
	{
		if (nodoN->der)
			return	Votar(voto, carne, nodoN->der, time, capt);
	}
	else if (carne < nodoN->value.carne)
	{
		if (nodoN->izq)
			return	Votar(voto, carne, nodoN->izq, time, capt);
	}
}
nodo Arbol::Existe(int carne, nodo*nodoN)
{
	nodo * n = new nodo();
	n->value.carne = 0;
	if (nodoN)
		if (nodoN->value.carne == carne)
		{
			return *nodoN;
		}
		else if (carne > nodoN->value.carne)
		{
			if (nodoN->der)
				return	Existe(carne, nodoN->der);
		}
		else if (carne < nodoN->value.carne)
		{
			if (nodoN->izq)
				return	Existe(carne, nodoN->izq);
		}
		else
		{
			return *n;
		}
	return *n;
}
void Arbol::insertar(Estudiante value, nodo *actual)
{
	nodo *nuevo = new nodo();
	nuevo->value = value;

	if (!actual) {
		root = nuevo;
	}
	else {
		if (nuevo->value.carne < actual->value.carne) {
			if (actual->izq) {
				insertar(value, actual->izq);
			}
			else {
				actual->izq = nuevo;
			}
		}
		else if (nuevo->value.carne > actual->value.carne) {
			if (actual->der) {
				insertar(value, actual->der);
			}
			else {
				actual->der = nuevo;
			}
		}
	}
}

