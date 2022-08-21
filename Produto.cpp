#include <iostream>
#include <string>
#include <algorithm>
#include "FProduto.h"

using namespace std;

int main(void){
setlocale(LC_ALL, "Portuguese");
	Produto obj;
		
	obj.setSerie();
	obj.setNome();
	obj.setCodigo();
	obj.setPreco();
	
	/*Exemplo 1*/
	obj.setImprime();
	
	/*Exemplo 2*/	
	cout<<"\nExemplo 2:\n"<<
	"\nSerie: "<<obj.getSerie()<<"\nNome :"<<obj.getNome()<<"\nCodigo :"<<obj.getCodigo()<<"\nPreço:"<<obj.getPreco()<<endl;

	return 0;	
}
//Matheus Malvar
