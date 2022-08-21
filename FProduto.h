#include <iostream>
#include <string>
#include <algorithm>
#include "Produto.h"
#include <locale.h>

using namespace std;

Produto::Produto(){
}

Produto::Produto(int cod_produ, double preco, string nome, unsigned int serie){
	this->nome = nome;
	this->cod_produ = cod_produ;
	this->preco = preco;
	this->serie = serie;
	}
	
//=================//=================//=================//=================//=================//=================
void Produto::setCodigo(){
	cout<<"Insira o codigo do produto: "<<"\n";
	scanf("%d",&cod_produ);
		do{
		if (cod_produ > 99999){
		cout<<"\nPor favor, inserir até 5 digitos: "<<"\n";
		scanf("%d",&cod_produ);
		}else
			this->cod_produ = cod_produ;
		}while(cod_produ > 99999);
	
}	
int Produto::getCodigo(){
		return cod_produ;
		
}
	
//=================//=================//=================//=================//=================//=================
void Produto::setPreco(){
	cout<<"Insira o preço: "<<"\n";
	cin>>preco;
	this->preco = preco;
}
double Produto::getPreco(){
	return preco;
}

//=================//=================//=================//=================//=================//=================
void Produto::setNome(){
	cout<<"Insira o nome do produto: "<<"\n";	
	getline(cin, nome);
	this->nome = nome;
}
string Produto::getNome(){
	return nome;
}

//=================//=================//=================//=================//=================//=================
void Produto::setSerie(){
	cout<<"Insira o nº de serie: "<<"\n";
	scanf("%d%*c", &serie);
	this->serie = serie;
}

int Produto::getSerie(){
	return serie;
}

//=================//=================//=================//=================//=================//=================
void Produto::setImprime(){
	cout<<"\nExemplo 1:\n"<<"\nSerie: "<<serie<<"\n"<<"Nome: "<<nome<<"\n"<< "Codigo: "<<cod_produ<<"\n";
	printf("%2.2f\n", preco);
}

//Matheus Malvar
