#include <iostream>
using std::istream;
using std::ostream;
#include <string>
using std::string;

class matriz
{
	friend ostream& operator<<(ostream&, const matriz&); 
  	friend istream& operator>>(istream&, matriz&);
	private:
		int fila,columna;
		double _matriz[][];
	public:

		string toString()const;
		const matriz operator+(const matriz&)const;
		const matriz operator-(const matriz&)const;
		const matriz operator-()const;
		const matriz operator*(const matriz&)const;
		matriz();
		~matriz();
	
};