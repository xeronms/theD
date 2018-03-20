
#include "Wektor.h"

using namespace std;


Wektor::Wektor(double a, double b, double c):x(a),y(b),z(c){}

void Wektor::printv(){
	printf("%lf %lf %lf\n",x,y,z);
}

Wektor Wektor::operator+(Wektor w2)const{
	return Wektor(x+w2.x, y+w2.y, z+w2.z);
}

Wektor Wektor::operator*(double k)const{
	return Wektor(x*k, y*k, z*k);
}

double Wektor::operator*(Wektor w)const{
	return x*w.x+y*w.y+z*w.z;
}

Wektor Wektor::iloczynW(Wektor w)const{
	return Wektor(y*w.z-z*w.y, z*w.x-x*w.z, x*w.y-y*w.x);
}

bool Wektor::operator==(Wektor w)const{
	return x==w.x && y==w.y && z==w.z;
}

bool Wektor::operator!=(Wektor w)const{
	return !(*this==w);
}

void Wektor::normalizacja(){
	double len = sqrt(x*x+y*y+z*z);
	*this = Wektor(x/len, y/len, z/len);
}



Wektor operator*(double k, Wektor w){
	return (w*k);
}