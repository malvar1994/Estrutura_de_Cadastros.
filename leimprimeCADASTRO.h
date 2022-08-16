#include <stdio.h>
#include <string.h>
#include "StructCADASTRO.h"

void inputID ( ID dados[]){
	for(int i=0;i<1;i++){
	printf("Insert name: \n");
	gets(dados[i].nome);
	printf("Insert last name: \n");
	gets(dados[i].sobrenome);
	printf("Insert birth date: \n");
	scanf("%d %d %d", &dados[i].nasc.dia, &dados[i].nasc.mes, &dados[i].nasc.ano);
	}
}
void inputID2 ( ID dados[]){
	for(int i=0;i<1;i++){
	printf("\nInsert name: \n");
	gets(dados[i].nome);
	printf("Insert last name: \n");
	gets(dados[i].sobrenome);
	printf("Insert birth date: \n");
	scanf("%d %d %d%*c", &dados[i].nasc.dia, &dados[i].nasc.mes, &dados[i].nasc.ano);
	printf("Insert last height: \n");
	scanf("%f",&dados[i].altura);
	printf("Insert last weight: \n");
	scanf("%f",&dados[i].peso);
	}	
}

void outputID ( ID dados[]){
	for(int i=0;i<1;i++){
	printf("\n\nName: %s %s\n",dados[i].nome, dados[i].sobrenome);
	printf("Birth Date: %02d/%02d/%02d",dados[i].nasc.dia, dados[i].nasc.mes, dados[i].nasc.ano);
	}
}

void outputID2 ( ID dados[]){
	for(int i=0;i<1;i++){
	printf("Name: %s %s\n",dados[i].nome, dados[i].sobrenome);
	printf("Birth Date: %02d/%02d/%02d\n",dados[i].nasc.dia, dados[i].nasc.mes, dados[i].nasc.ano);
	printf("Height: %.2f\n",dados[i].altura);
	printf("Weight: %.2f\n",dados[i].peso);
	}
}

//================================================================================================//===========================================
void inputREG (REGISTRO dados[]){
	for(int i=0;i<1;i++){
	printf("\nenter the C.P.F: \n");
	scanf("%s%*c", &dados[i].cpf);
	printf("enter the phone: \n");
	gets(dados[i].phone);
	printf("enter the email: \n");
	gets(dados[i].email);	
	}
}


void inputREG2 (REGISTRO dados[]){
	for(int i=0;i<1;i++){
	printf("\nenter the name: \n");
	gets(dados[i].pessoa.nome);
	printf("enter the last name: \n");
	gets(dados[i].pessoa.sobrenome);
	printf("enter the birth date: \n");
	scanf("%d %d %d",&dados[i].pessoa.nasc.dia, &dados[i].pessoa.nasc.mes, &dados[i].pessoa.nasc.ano);
	printf("enter the C.P.F: \n");
	scanf("%s%*c", &dados[i].cpf);
	printf("enter the phone: \n");
	gets(dados[i].phone);
	printf("enter the email: \n");
	gets(dados[i].email);	
	}
}

void outputREG (REGISTRO dados[]){
	for(int i=0;i<1;i++){
	printf("\nC.P.F: %s \n",dados[i].cpf);
	printf("Phone: %s\n",dados[i].phone);
	printf("Email: %s\n",dados[i].email);	
	}
}

void outputREG2 ( REGISTRO dados[]){
	for(int i=0;i<1;i++){
	printf("Name: %s %s\n:",dados[i].pessoa.nome,dados[i].pessoa.sobrenome);
	printf("Birth Date: %02d/%02d/%02d\n",dados[i].pessoa.nasc.dia, dados[i].pessoa.nasc.mes, dados[i].pessoa.nasc.ano );		
	printf("C.P.F: %s\n",dados[i].cpf);
	printf("Phone: %s\n",dados[i].phone);
	printf("Email: %s\n",dados[i].email);	
	}
}
//=======================================================================//============================================================

void inputCAD (CADASTRO dados[]){
	for(int i=0;i<1;i++){
	printf("\nInforme a cagetegoria: \n");
	gets(dados[i].categ);
	}
}

void inputCAD2 (CADASTRO dados[]){
	for(int i=0;i<1;i++){
	printf("\nInforme o nome: \n");
	gets(dados[i].ficha.pessoa.nome);
	printf("Informe o sobrenome: \n");
	gets(dados[i].ficha.pessoa.sobrenome);
	printf("Informe a data de nascimento: \n");
	scanf("%d %d %d", &dados[i].ficha.pessoa.nasc.dia, &dados[i].ficha.pessoa.nasc.mes, &dados[i].ficha.pessoa.nasc.ano);
	printf("Informe o C.P.F.: \n");
	scanf("%s%*c", &dados[i].ficha.cpf);
	printf("Informe o telefone: \n");
	gets(dados[i].ficha.phone);
	printf("Informe o email: \n");
	gets(dados[i].ficha.email);
	printf("Cagetegoria: %s \n",dados[i].categ);

	}
}


void outputCAD (CADASTRO dados[]){
	for(int i=0;i<1;i++){
	printf("Cagetegoria: %s \n",dados[i].categ);

	}
}

void outputCAD2 (CADASTRO dados[]){
	for(int i=0;i<1;i++){
	printf("Name: %s %s\n:", dados[i].ficha.pessoa.nome, dados[i].ficha.pessoa.sobrenome);
	printf("Birth Date: %02d/%02d/%02d\n",dados[i].ficha.pessoa.nasc.dia, dados[i].ficha.pessoa.nasc.mes, dados[i].ficha.pessoa.nasc.ano);
	printf("C.P.F.: %s\n",dados[i].ficha.cpf);
	printf("Telefone: %s\n",dados[i].ficha.phone);
	printf("Email: %s\n",dados[i].ficha.email);
	printf("Cagetegoria: \n", dados[i].categ);

	}
}

//Matheus Malvar
