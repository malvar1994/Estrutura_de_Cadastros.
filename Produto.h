#include <string>

using namespace std;

class Produto{
	
	private:
	unsigned int serie;
		
	public:
		int	cod_produ;
		double preco;
		string nome;
			
//=================//=================//=================//=================
	Produto();
	Produto(int cod_produ, double preco, string nome, unsigned int serie);
//=================//=================//=================//=================	
	void setCodigo();
	int getCodigo();
	void setPreco();
	double getPreco();
	void setNome();
	string getNome();
	void setSerie();
	int getSerie();
	void setImprime();
//=================//=================//=================//=================	
};



		
