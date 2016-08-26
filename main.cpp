#include <iostream>
using namespace std;

# include <sstream>
using std::stringstream;

# include <vector>
using std::vector;

#include <string>
using std::ostream;

#include "matriz.h"

void imprimir(double**,int,int);
int main(int argc, char const *argv[])
{
	vector<matriz> matrices;
	vector<matriz> resultados;
	int op=0;
	while(op!=10){
		cout<<"1.-Agregar"<<endl<<"2.-Suma"<<endl<<"3.-Menos unario"<<endl<<"4.-Resta"<<endl<<"5.-Multiplicacion"<<endl<<
		"6.-Transpuesta"<<endl<<"7.-Comparacion"<<endl<<"8.-Diferencia"<<endl<<"9.-Inversa"<<endl;
		cin>>op;
		switch(op){
			case 1:{
				cout<<"\tAGREGAR"<<endl;
				int fila,columna;
				cout<<"Fila: ";
				cin>>fila;
				cout<<"Columna: ";
				cin>>columna;
				matriz tem(fila,columna);
				int numero;
				for (int i = 0; i < fila; i++)
				{
					for (int j = 0; j < columna; j++)
					{
						cin>>numero;
						tem.getArreglo()[i][j]=numero;
					}
					
				}
				matrices.push_back(tem);
				break;
			}
			case 2:{
				cout<<"\tSUMA"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				imprimir(matrices[p2].getArreglo(),matrices[p2].getFila(),matrices[p2].getColumna());				
				if (matrices[p1].getFila()==matrices[p2].getFila() && matrices[p1].getColumna()==matrices[p2].getColumna())
				{
					matriz tem=matrices[p1]+matrices[p2];
					cout<<"Resultado de la suma"<<endl;
					imprimir(tem.getArreglo(),tem.getFila(),tem.getColumna());
					resultados.push_back(tem);	
				}else{
					cout<<"La suma no se puede realizar las matrices no tienen el mismo size"<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\tMenos unario"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				cout<<"Resultado "<<endl;
				matriz tem=-matrices[p1];
				imprimir(tem.getArreglo(),tem.getFila(),tem.getColumna());
				resultados.push_back(tem);
				matrices[p1]=tem;	
				break;
			}
			case 4:{
				cout<<"\tRESTA"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				imprimir(matrices[p2].getArreglo(),matrices[p2].getFila(),matrices[p2].getColumna());

				if (matrices[p1].getFila()==matrices[p2].getFila() && matrices[p1].getColumna()==matrices[p2].getColumna())
				{
					matriz tem=matrices[p1]-matrices[p2];
					imprimir(tem.getArreglo(),tem.getFila(),tem.getColumna());
					resultados.push_back(tem);	
				}else{
					cout<<"La resta no se puede realizar las matrices no tienen el mismo size"<<endl;
				}
				break;
			}
			case 5:{
				cout<<"\tMUTIPLICACION"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				imprimir(matrices[p2].getArreglo(),matrices[p2].getFila(),matrices[p2].getColumna());
				if (matrices[p1].getColumna()==matrices[p2].getFila())
				{
					matriz tem=matrices[p1]*matrices[p2];
					imprimir(tem.getArreglo(),tem.getFila(),tem.getColumna());
					resultados.push_back(tem);	
				}else{
					cout<<"La multiplicacion no se puede realizar las matrices no cumplen las propiedades"<<endl;
				}
				break;
			}
			case 6:{
				cout<<"\tTRANSPUESTA"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				matriz tem=matrices[p1]();
				imprimir(tem.getArreglo(),tem.getFila(),tem.getColumna());
				resultados.push_back(tem);
				break;
			}
			case 7:{
				cout<<"\tCOMPARACION"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				imprimir(matrices[p2].getArreglo(),matrices[p2].getFila(),matrices[p2].getColumna());
				if ((matrices[p1]==matrices[p2]))
				{
					cout<<"Las matrices son iguales"<<endl;
				}else{
					cout<<"Las matrices no son iguales"<<endl;
				}

				
				break;
			}
			case 8:{
				cout<<"\tDIFERENCIA"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i]<<endl;
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				imprimir(matrices[p1].getArreglo(),matrices[p1].getFila(),matrices[p1].getColumna());
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				imprimir(matrices[p2].getArreglo(),matrices[p2].getFila(),matrices[p2].getColumna());
				if ((matrices[p1]!=matrices[p2]))
				{
					cout<<"Las matrices no iguales"<<endl;
				}else{
					cout<<"Las matrices son iguales"<<endl;
				}
				break;
			}
		}
	}
	return 0;
}
void imprimir(double** arreglo,int fila,int columna){
	for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < columna; j++)
			{
				cout<<"["<<arreglo[i][j]<<"]";
			}
		cout<<endl;
	}
}