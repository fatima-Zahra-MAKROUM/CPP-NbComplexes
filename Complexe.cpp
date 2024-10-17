#include "Complexe.h"
#include <math.h>
#include <iostream>


Complexe::Complexe()
{
	this->Re = 0;
	this->img = 0;

}

Complexe::Complexe(double img, double Re)
{
	this->Re = Re;
	this->img = img;
}

Complexe::Complexe(const Complexe& C)
{
	this->Re = C.Re;
	this->img = C.img;
}

void Complexe::afficher() const
{
	std::cout << this->Re << "+" << this->img << "i\n"<< std::endl;
}

Complexe* Complexe::operator+(const Complexe& z)
{
	Complexe* z2 = new Complexe();
	z2->Re = this->Re + z.Re;
	z2->img = this->img + z.img;
	return z2;

	

}

Complexe* Complexe::operator+(const double a)
{
	Complexe* z2 = new Complexe();
	z2->Re = this->Re + a;
	z2->img = this->img;

	return z2;
}

Complexe* Complexe::operator-(const Complexe& z)
{

	Complexe* z2 = new Complexe();
	z2->Re = this->Re - z.Re;
	z2->img = this->img - z.img;
	return z2;

}

Complexe* Complexe::operator-(const double a)
{
	Complexe* z2 = new Complexe();
	z2->Re = this->Re - a;
	z2->img = this->img;

	return z2;
}



Complexe* Complexe::operator*(const Complexe& z)
{
	Complexe* z2 = new Complexe();
	z2->Re = (this->Re * z.Re) - (this->img * z.img);
	z2->img = (this->Re * z.img) + (this->img * z.Re);
	return z2;
}


Complexe* Complexe::operator*(const double a)
{
	Complexe* z2 = new Complexe();
	z2->Re = this->Re * a;
	z2->img = this->img * a;

	return z2;
}

Complexe* Complexe::operator/(const Complexe& z)
{

	Complexe* z2 = new Complexe();
	z2->Re = ((this->Re * z.Re) + (this->img * z.img)) / (pow((z.Re), 2) + pow((z.img), 2));
	z2->img = ((this->img * z.Re) - (this->Re * z.img)) / (pow((z.Re), 2) + pow((z.img), 2));
	return z2;
}

Complexe* Complexe::operator/(const double a)
{
	Complexe* z2 = new Complexe();
	z2->Re = (this->Re * a) / (pow((a), 2));
	z2->img = (this->img * a) / (pow((a), 2));

	return z2;
}


Complexe* Complexe::conjugue() const
{
	Complexe* z2 = new Complexe();
	z2->Re = this->Re;
	z2->img = -this->img; // Inverser le signe de la partie imaginaire
	return z2;
}


double Complexe::modulo() const
{
	
	return sqrt(pow(this->Re, 2) + pow(this->img, 2));
}


