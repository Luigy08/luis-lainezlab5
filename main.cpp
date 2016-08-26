#include <iostream>
#include "matriz.h"
using namespace std;

int main(int argc, char const *argv[])
{
	vector<matriz> matrices;
	vector<matriz> resultados;
	int op=0;
	while(op!=10){
		cout<<"1.-Agregar"<<endl<<"2.-Suma"<<"3.-Menos unario"<<"4.-Resta"<<"5.-Multiplicacion"<<endl;
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
						tem._matriz[i][j]=numero;
					}
				}
				matrices.push_back(tem);
				break;
			}
			case 2:{
				cout<<"\tSUMA"<<nedl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz: "<<i+1<<matrices[i];
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				if (matrices[p1].fila==matrices[p2].fila && matrices[p1].columna==matrices[p2].columna)
				{
					resultados.push_back(matrices[p1]+matrices[p2]);	
				}else{
					Cout<<"La suma no se puede realizar las matrices no tienen el mismo size"<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\tMenos unario"<<nedl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i];
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				resultados.push_back(matrices[p1]-);	
				break;
			}
			case 4:{
				cout<<"\tRESTA"<<nedl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i];
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				if (matrices[p1].fila==matrices[p2].fila && matrices[p1].columna==matrices[p2].columna)
				{
					resultados.push_back(matrices[p1]-matrices[p2]);	
				}else{
					Cout<<"La resta no se puede realizar las matrices no tienen el mismo size"<<endl;
				}
				break;
			}
			case 5:{
				cout<<"\tMUTIPLICACION"<<endl;
				for (int i = 0; i < matrices.size(); i++)
				{
					cout<<"Matriz "<<i+1<<": "<<matrices[i];
				}
				int p1,p2;
				cout<<"Posicion de la primera matriz: ";
				cin>>p1;
				p1--;
				cout<<"Posicion de la primera matriz: ";
				cin>>p2;
				p2--;
				if (matrices[p1].columna==matrices[p2].fila)
				{
					resultados.push_back(matrices[p1]*matrices[p2]);	
				}else{
					Cout<<"La multiplicacion no se puede realizar las matrices no cumplen las propiedades"<<endl;
				}
				break;
			}
		}
	}
	return 0;
}