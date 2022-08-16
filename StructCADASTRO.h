
typedef struct{
	int dia;
	int mes;
	int ano;
}DATA;

typedef struct{
	char nome[20];
	char sobrenome[20];
	float altura;
	float peso;
	DATA nasc;
}ID;

typedef struct{
	char email[40];
	char phone[40];
	char cpf[12];
	ID pessoa;
}REGISTRO;

typedef struct{
	REGISTRO ficha;
	char categ[30];
	char matricula[30];
}CADASTRO;

//Matheus Malvar
