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
	arreglo=new double*[fila];
	for (int i = 0; i < fila; i++)
	{
		arreglo[i]=new double[columna];
	}
}
matriz::~matriz(){

}
ostream& operator<<(ostream& out, const matriz& r){
    out << r.toString();
    return out;


}
int matriz::getFila(){
	return fila;
}
int matriz::getColumna(){
	return columna;
}
double** matriz::getArreglo(){
	return arreglo;
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

    		salida.arreglo[i][j]=this->arreglo[i][j]+m.arreglo[i][j];
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
    		salida.arreglo[i][j]=this->arreglo[i][j]-m.arreglo[i][j];
    	}
    }

    return salida;
}
const matriz matriz::operator-()const{
	matriz salida(this->fila,this->columna);
	for (int i = 0; i < this->fila; i++)
	{
		for (int j = 0; j < this->columna; j++)
		{
			salida.arreglo[i][j]=this->arreglo[i][j]*-1;
		}
	}
	return salida;
}
const matriz matriz::operator*(const matriz& m)const{
    matriz salida(this->fila,m.columna);
    
    for (int i = 0; i < this->fila; i++)
    {
    	
    	for (int j = 0; j < this->columna; j++)
    	{
    				
    		for (int k = 0; k < this->columna; k++)
    		{
    			salida.arreglo[i][j]+=this->arreglo[i][k]*m.arreglo[k][j];
    		}
    		
    	}

    }

    return salida;
}
const matriz matriz::operator()()const{
    matriz salida(this->columna,this->fila);
    
    for (int i = 0; i < this->fila; i++)
    {
    	
    	for (int j = 0; j < this->columna; j++)
    	{
    		salida.arreglo[j][i]=this->arreglo[i][j];
    	}

    }

    return salida;
}
const bool matriz::operator==(const matriz& m)const{
    bool salida=true;
    if (this->fila!=m.fila||this->columna!=m.columna)
    {
    	salida=false;
    }
    for (int i = 0; i < this->fila; i++)
    {
    	
    	for (int j = 0; j < this->columna; j++)
    	{
    		if (this->arreglo[i][j]!=m.arreglo[i][j])
    		{
    			salida=false;
    		}
    	}

    }

    return salida;
}
const bool matriz::operator!=(const matriz& m)const{
    bool salida=true;
    if (this->fila==m.fila||this->columna==m.columna)
    {
    	salida=false;
    }
    for (int i = 0; i < this->fila; i++)
    {
    	
    	for (int j = 0; j < this->columna; j++)
    	{
    		if (this->arreglo[i][j]==m.arreglo[i][j])
    		{
    			salida=false;
    		}
    	}

    }

    return salida;
}

