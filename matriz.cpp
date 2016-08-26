#include "matriz.h"
#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <iostream>
using std::istream;
using std::ostream;
matriz::matriz(int fila,int columna){
	this->fila=fila;
	this->columna=columna;
	double tem[fila][columna];
	this->_matriz[][]=tem;
}
matriz::~matriz(){

}
string matriz::toString()const{
    stringstream ss;
    ss<<"Fila: "<<fila<<" Columna: "<<columna;
           
    return ss.str();
}
const matriz matriz::operator+(const matriz& m)const{
    matriz salida(m.fila,m.columna);
    for (int i = 0; i < m.fila; i++)
    {
    	for (int j = 0; j < m.columna; j++)
    	{
    		salida[i][j]=this->_matriz[i][j]+m._matriz[i][j];
    	}
    }

    return salida;
}
const matriz matriz::operator-(const matriz& m)const{
    matriz salida(m.fila,m.columna);
    for (int i = 0; i < m.fila; i++)
    {
    	for (int j = 0; j < m.columna; j++)
    	{
    		salida[i][j]=this->_matriz[i][j]-m._matriz[i][j];
    	}
    }

    return salida;
}
const matriz matriz::operator-()const{
	matriz salida(this->fila,this->columna);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			salida[i][j]=this->_matriz[i][j]*-1;
		}
	}
	return salida;
}
const matriz matriz::operator-(const matriz& m)const{
    matriz salida(m.fila,m.columna);
    
    for (int i = 0; i < m.fila; i++)
    {
    	;
    	for (int j = 0; j < this->columna; j++)
    	{
    		double temp=0		
    		for (int k = 0; k < this->columna; k++)
    		{
    			temp+=this->_matriz[j][k]*m._matriz[k][j];
    		}
    		salida[i][j]=temp;
    	}

    }

    return salida;
}