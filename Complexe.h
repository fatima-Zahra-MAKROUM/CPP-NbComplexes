#pragma once
#include <string>
using namespace std;

class Complexe
{
private:
	double Re;
	double img;

public:

	Complexe();
	Complexe(double, double );
	Complexe(const Complexe&);
	void afficher() const;
	//operateur +
	Complexe* operator+(const Complexe& z);
	Complexe* operator+(const double a);

	//operateur -
	Complexe* operator-(const Complexe& z);
	Complexe* operator-(const double a);

	//operateur *
	Complexe* operator*(const Complexe& z);
	Complexe* operator*(const double a);

	//operateur /
	Complexe* operator/(const Complexe& z);
	Complexe* operator/(const double a);

	//conjugué
	Complexe* conjugue() const;

	//modulo
	double modulo() const;







};

