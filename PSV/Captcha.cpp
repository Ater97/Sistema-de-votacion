#include "stdafx.h"
#include "Captcha.h"


bool Captcha::Verificar(string texto, int numeroImagen)
{
	switch (numeroImagen)
	{
	case (0):
		if (texto == im1)
		{
			return true;
		}
		else
		{
			return false;
		}
		break;
	case (1):
		if (texto == im2)
		{
			return true;
		}
		else
		{
			return false;
		}
		break;
	case (2):
		if (texto == im3)
		{
			return true;
		}
		else
		{
			return false;
		}
		break;
	case (3):
		if (texto == im4)
		{
			return true;
		}
		else
		{
			return false;
		}
		break;
	default:
		break;
	}
}
Captcha::Captcha()
{
}


Captcha::~Captcha()
{
}
