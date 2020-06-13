#include <iostream>
#include "Chatarunga.h"
#include <string>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string resp;
	Chatarunga* juego = new Chatarunga();
	do{
		cout << endl <<endl <<"Desea Jugar ? (1 = si) "<<endl;
		getline(cin,resp);
		if(resp=="1"){
			juego->jugar();
		}else {
			cout << "Busque que hacer , ah y gracias por almenos entrar al programa :)"<< endl;
		}
	}while(resp=="1");
	delete juego ;
	return 0;
	
	
	
	return 0;
}
