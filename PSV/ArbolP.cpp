#include "stdafx.h"
#include "ArbolP.h"
#include <string>

using namespace System;
using namespace System::Runtime::InteropServices;
ArbolP::ArbolP()
{
	root = NULL;
}


ArbolP::~ArbolP()
{
}
void ArbolP::insertar(Planilla value, nodoP *actual)
{
	nodoP *nuevo = new nodoP();
	nuevo->value = value;

	if (!actual) {
		root = nuevo;
	}
	else {
		if (nuevo->value.id < actual->value.id) {
			if (actual->izq) {
				insertar(value, actual->izq);
			}
			else {
				actual->izq = nuevo;
			}
		}
		else if (nuevo->value.id > actual->value.id) {
			if (actual->der) {
				insertar(value, actual->der);
			}
			else {
				actual->der = nuevo;
			}
		}
	}
}
nodoP ArbolP::Existe(int id, nodoP*nodoN)
{
	nodoP * n = new nodoP();
	n->value.id = 0;
	if (nodoN)
		if (nodoN->value.id == id)
		{
			return *nodoN;
		}
		else if (id > nodoN->value.id)
		{
			if (nodoN->der)
				return	Existe(id, nodoN->der);
		}
		else if (id < nodoN->value.id)
		{
			if (nodoN->izq)
				return	Existe(id, nodoN->izq);
		}
		else
		{
			return *n;
		}
	return *n;
}
nodoP ArbolP::Existe(string nombre, nodoP * nodoN)
{
	nodoP * n = new nodoP();
	n->value.id = 0;
	if (nodoN)
		if (nodoN->value.Asociacion == nombre)
		{
			return *nodoN;
		}
		else if (nodoN->izq)
		{
			return	Existe(nombre, nodoN->izq);
		}
		else if (nodoN->der)
		{
				return	Existe(nombre, nodoN->der);
		}
		else
		{
			return *n;
		}
	return *n;
}
nodoP ArbolP::Votar(string planilla, nodoP * nodoN)
{
	if (nodoN)
	{
		if (nodoN->value.Asociacion == planilla)
		{
			nodoN->value.votos++;
		//	return *nodoN;
		}
		else if (nodoN->izq) {
			Votar(planilla,nodoN->izq);
		}
		else if (nodoN->der) {
			Votar(planilla, nodoN->der);
		}

	}
	return *nodoN;
}
string cadenaP = "";
string ArbolP::Conteo(nodoP * actual)
{
	if (actual)
	{
		cadenaP += " " + (actual->value.Asociacion) + " " + (char*)(void*)Marshal::StringToHGlobalAnsi(Convert::ToString(actual->value.votos)) + ";";
		if (actual->izq) {
			Conteo(actual->izq);
		}
		if (actual->der) {
			Conteo(actual->der);
		}
	}
	return cadenaP;
}
string planilla_Ganadora = " ";
int sum_votos = 0;
string ArbolP::Ganador(nodoP *actual)
{
	if (actual)
	{
		if (actual->value.votos > sum_votos)
		{
			sum_votos = actual->value.votos;
			planilla_Ganadora = actual->value.Asociacion;
		}
		else if(actual->value.votos = sum_votos && sum_votos!=0)
		{
			planilla_Ganadora += " \n" + actual->value.Asociacion;
		}
		if (actual->izq) {
			Conteo(actual->izq);
		}
		if (actual->der) {
			Conteo(actual->der);
		}
	}
	return planilla_Ganadora;
}