#include <iostream>
using std::istream;
using std::ostream;
#include <string>
using std::string;
#pragma once
class matriz
{
	friend ostream& operator<<(ostream&, const matriz&); 
  	//friend istream& operator>>(istream&, matriz&);
	private:
		int fila,columna;
		double** arreglo;

	public:
		int getFila();
		int getColumna();
		double** getArreglo();
		double** haceUno(double**,int,int,int);
		const matriz operator+(const matriz&)const;
		const matriz operator-(const matriz&)const;
		const matriz operator-()const;
		const matriz operator()()const;
		const matriz operator*(const matriz&)const;
		const bool	 operator==(const matriz&)const;
		const bool	 operator!=(const matriz&)const;
		const matriz operator--()const;
		string toString()const;
		matriz(int,int);
		~matriz();
	
};