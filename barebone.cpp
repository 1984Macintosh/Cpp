#include <iostream>
using namespace std;

class multi{
	int x,y;
	
	public:
		void definir(int,int);
		int area(){return x*y;}
};

void multi::definir(int base, int altura){
	x = base;
	y = altura;
}

int main(){
	
	multi forma;
	
	forma.definir(3,5);
	
	cout << "A area e: " << forma.area() << endl;
	
	int l,c;
	
	//faz matriz
	cout << "Insira o numero de linhas: " << endl;
	cin >> l;
	cout << "Insira o numero de colunas: " << endl;
	cin >> c;
	
	for(int i=1; i <= l; i++){
		for(int z= 1; z <= c; z++){
			cout << "[" << i << "," << z << "] ";
		}
		cout << endl;
	}
	return 0;
}
