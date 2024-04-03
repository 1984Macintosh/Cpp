#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

using namespace std;

class grafo_quadro_resumo_empresa{
	
	public :
		int matriz[8][8];
		
	void insere(){ //preenche a matriz com numeros aleatorios de 0 a 1 -> teste para ver se está funcionando
		int i,j;
		srand(time(NULL));
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				matriz[i][j] = rand()%2;
			}
		}
		cout<<"\n";
	}
	void imprimi(){ // imprimi a matriz
		int i,j;
		cout<<"\n\n";
		for(i=0;i<8;i++){
			if(i==0){
				cout<<"	   A  B  C  D  E  F  G  H"<<"\n\n";
				cout<<"Carlos ->  ";
			}
			if(i==1)
				cout<<"Lara   ->  ";		
			if(i==2)
				cout<<"Luis   ->  ";			
			if(i==3)
				cout<<"Luciana->  ";		
			if(i==4)
				cout<<"Mathias->  ";			
			if(i==5)
				cout<<"Juliana->  ";			
			if(i==6)
				cout<<"Martha ->  ";		
			if(i==7)
				cout<<"Heliana->  ";
						
			for(j=0;j<8;j++){
				cout<<matriz[i][j]<<"  ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	void amigos(){ // relaciona os funcionários aos projetos
		
		cout<<"\n";
		
		for(int i=0;i<8;i++){
			
			if(i==0){
				cout<<"Carlos está envolvido com o seguinte projeto ";
			}
			if(i==1){
				cout<<"Lara está envolvida com o seguinte projeto  ";
			}
			if(i==2){
				cout<<"Luís está envolvido com o seguinte projeto ";
			}
			if(i==3){
				cout<<"Luciana está envolvida com o seguinte projeto ";
			}
			if(i==4){
				cout<<"Mathias está envolvido com o seguinte projeto ";
			}
			if(i==5){
				cout<<"Juliana está envolvida com o seguinte projeto ";
			}
			if(i==6){
				cout<<"Martha está envolvida com o seguinte projeto ";
			}
			if(i==7){
				cout<<"Heliana está envolvida com o seguinte projeto ";
			}
			for(int j=0;j<8;j++){
				
				if(matriz[i][j]==1 && j==0)				// Podemos criar categorias de projetos -> Opicional
					cout<<" A "; 						// Sensoriamento Remoto -> Categorias
				if(matriz[i][j]==1 && j==1)
					cout<<" B ";						// Cabeamento Estruturado
				if(matriz[i][j]==1 && j==2)
					cout<<" C ";						// Otimizaçõa de Rede Wi-Fi
				if(matriz[i][j]==1 && j==3)
					cout<<" D "; 						//Desenvolvimento Web 
				if(matriz[i][j]==1 && j==4)
					cout<<" E "; 						//Segurança de Rede 
				if(matriz[i][j]==1 && j==5)
					cout<<" F ";						
				if(matriz[i][j]==1 && j==6)
					cout<<" G ";
				if(matriz[i][j]==1 && j==7)
					cout<<" H ";
			}
		cout<<"\n";
		}
		cout<<"\n";
	}
	void iguais(){ // quais estão no mesmo projeto

		for(int i=0;i<8;i++){

                if(matriz[0][i]==1 && matriz[1][i]==1){
                    cout << "Carlos e Lara possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[0][i]==1 && matriz[2][i]==1){
                    cout << "Carlos e Luís possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[0][i]==1 && matriz[3][i]==1){
                    cout << "Carlos e Luciana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[0][i]==1 && matriz[4][i]==1){
                    cout << "Carlos e Mathias possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
				if(matriz[0][i]==1 && matriz[5][i]==1){
                    cout << "Carlos e Juliana possuem o projeto ";
                   if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[0][i]==1 && matriz[6][i]==1){
                    cout << "Carlos e Martha possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[0][i]==1 && matriz[7][i]==1){
                    cout << "Carlos e Heliana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[2][i]==1){
                    cout << "Lara e Luís possuem o projeto ";
                   if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[3][i]==1){
                    cout << "Lara e Luciana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[4][i]==1){
                    cout << "Lara e Mathias possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[5][i]==1){
                    cout << "Lara e juliana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[6][i]==1){
                    cout << "Lara e Martha possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[1][i]==1 && matriz[7][i]==1){
                    cout << "Lara e Heliana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[2][i]==1 && matriz[3][i]==1){
                    cout << "Luis e Luciana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[2][i]==1 && matriz[4][i]==1){
                    cout << "Luis e Mathias possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[2][i]==1 && matriz[5][i]==1){
                    cout << "Luis e Juliana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[2][i]==1 && matriz[6][i]==1){
                    cout << "Luis e Martha possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[2][i]==1 && matriz[7][i]==1){
                    cout << "Luis e Heliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
				if(matriz[3][i]==1 && matriz[4][i]==1){
                    cout << "Lucina e Mathias possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[3][i]==1 && matriz[5][i]==1){
                    cout << "Lucina e Juliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[3][i]==1 && matriz[6][i]==1){
                    cout << "Lucina e Martha possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[3][i]==1 && matriz[7][i]==1){
                    cout << "Lucina e Heliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                cout<<"\n";
                if(matriz[4][i]==1 && matriz[5][i]==1){
                    cout << "Mathias e Juliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[4][i]==1 && matriz[6][i]==1){
                    cout << "Mathias e Martha possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[4][i]==1 && matriz[7][i]==1){
                    cout << "Mathias e Heliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[5][i]==1 && matriz[6][i]==1){
                    cout << "Juliana e Martha possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[5][i]==1 && matriz[7][i]==1){
                    cout << "Juliana e Heliana possuem projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
                if(matriz[6][i]==1 && matriz[7][i]==1){
                    cout << "Martha e Heliana possuem o projeto ";
                    if(i==0)
                    	cout<<" A em comum "<<endl;
                    if(i==1)
                    	cout<<" B em comum "<<endl;
                    if(i==2)
                    	cout<<" C em comum "<<endl;
                    if(i==3)
                    	cout<<" D em comum "<<endl;
                    if(i==4)
                    	cout<<" E em comum "<<endl;
                    if(i==5)
                    	cout<<" F em comum "<<endl;
                    if(i==6)
                    	cout<<" G em comum "<<endl;
                    if(i==7)
                    	cout<<" H em comum "<<endl;
                }
		}
	}
};
int main(){
	setlocale(LC_ALL,"Portuguese");
	grafo_quadro_resumo_empresa graf;
	int opcao;
	while(5){
		cout<<"1 - Inserir"<<endl;
		cout<<"2 - Imprimir"<<endl;
		cout<<"3 - Relaciona Funcionários aos projetos"<<endl;
		cout<<"4 - Funcionários e projetos iguais"<<endl;
		cout<<"5 - Sair"<<endl;
		cout<<"Opcao : ";
		cin>>opcao;
		switch(opcao){
			case 1:{
				graf.insere();
				break;
			}
			case 2:{
				graf.imprimi();
				break;
			}
			case 3:{
				graf.amigos();
				break;
			}
			case 4:{
				graf.iguais();
				break;
			}
			case 5:{
				exit(5);
				break;
			}	
		}
	}
	return 0;
}
