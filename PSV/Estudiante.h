#pragma once
#include <string>

using namespace std;
class Estudiante
{
public:
	int carne = 0;
	string nombre = "";
	string Apellido = "";
	string fechaNacimineto = "";
	string Facultad = "";
	int voto = 0;
	string horaVoto = "";
	string password = "";

	//Estudiante(int carne, string nombre, string Apellido, string fechaNacimineto, string Facultad, int voto, double horaVoto, string password);
	Estudiante() {};
	//~Estudiante();
};

