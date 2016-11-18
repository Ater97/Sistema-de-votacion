#pragma once
#include <string>
using namespace std;
class Captcha
{
public:
	string im1 = "Chang";
	string im2 = "WdEsaXcqz";
	string im3 = "Wvphnh";
	string im4 = "XR94";
	bool Verificar(string texto, int numeroImagen);
	Captcha();
	~Captcha();
};

