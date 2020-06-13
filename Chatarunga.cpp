#include "Chatarunga.h"
#include "Piezas.h"
#include "Infanteria.h"
#include "Torre.h"
#include "Caballo.h"
#include "Elefante.h"
#include "Ministro.h"
#include "Raja.h"
#include <iostream>
#include <string>

using namespace std;

Chatarunga::Chatarunga()
{
}

void Chatarunga:: jugar(){
	crear();
	printTablero();
	string entrada;
	cout << "Que movimiento desea hacer:";
	getline(cin,entrada);
	do{
		int fila=0;
		int columna=0;
		if (entrada.size()==5){
			//string[2] array= entrada. 
			if(entrada[2]=='-'){
				if (entrada[0]=='A'){
					fila =0;
				}
				if (entrada[0]=='B'){
					fila=1;
				}
				if (entrada[0]=='C'){
					fila=2;
				}
				if (entrada[0]=='D'){
					fila=3;
				}
				if (entrada[0]=='E'){
					fila=4;
				}
				if (entrada[0]=='F'){
					fila=5;
				}
				if (entrada[0]=='G'){
					fila=6;
				}
				if (entrada[0]=='H'){
					fila=7
				}
			}
		}
		
	}while (entrada !="salir");
	
}
void Chatarunga::printTablero(){
	cout <<"   A B C D E F G H  "<< endl;
	cout <<"_____________________"<< endl;
	for(int i=0;i<size;i++){
		cout<<i<<" |";
		for(int j=0;j<size;j++){
			if (Tablero[i][j]==NULL){
				cout<<". ";
			}else{
				cout<<Tablero[i][j]->getCaracter()<<" ";	
			}
			
		}
		cout<<endl;
	}
	cout<<"_____________________"<< endl;
}
void Chatarunga::crear(){
		size=8;
	Tablero  = new Piezas**[size];
	for(int i = 0;i<size;i++){
		Tablero[i] = new Piezas*[size];
	}
	///instanciar size x size casillas
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
		   Tablero[i][j] = NULL;
		}
	}
	
	//Creacion de las piezas 
	for (int j =0 ; j < 8; j ++){
		Piezas* peon = new Infanteria(6,j,Tablero,true);
		//peon = new Infanteria();
		Tablero[6][j]= peon;
	}
	
	for (int j = 0; j< 8; j++){
		Piezas* Npeon= new Infanteria(1,j,Tablero,false);
		Tablero[1][j]=Npeon;
	}
	Piezas* torre= new Torre(7,0,Tablero,true);
	Tablero[7][0]=torre;
	Piezas* torre2= new Torre(7,7,Tablero,true);
	Tablero[7][7]=torre2;
	
	Piezas* Ntorre= new Torre(0,0,Tablero,false);
	Tablero[0][0]=Ntorre;
	Piezas* Ntorre2= new Torre(0,7,Tablero,false);
	Tablero[0][7]=Ntorre2;
	
	Piezas* caballo= new Caballo(7,1,Tablero,true);
	Tablero[7][1]=caballo;
	Piezas* caballo2= new Caballo(7,6,Tablero,true);
	Tablero[7][6]=caballo2;
	
	Piezas* Ncaballo= new Caballo(0,1,Tablero,false);
	Tablero[0][1]=Ncaballo;
	Piezas* Ncaballo2= new Caballo(0,6,Tablero,false);
	Tablero[0][6]=Ncaballo2;
	
	Piezas* elefante= new Elefante(7,2,Tablero,true);
	Tablero[7][2]=elefante;
	Piezas* elefante2= new Elefante(7,5,Tablero,true);
	Tablero[7][5]=elefante2;
	
	Piezas* Nelefante= new Elefante(0,2,Tablero,false);
	Tablero[0][2]=Nelefante;
	Piezas* Nelefante2= new Elefante(0,5,Tablero,false);
	Tablero[0][5]=Nelefante2;
	
	Piezas* ministro= new Ministro(7,3,Tablero,true);
	Tablero[7][3]=ministro;
	Piezas* Nministro= new Ministro(0,4,Tablero,false);
	Tablero[0][4]=Nministro;
	
	Piezas* raja= new Raja(7,4,Tablero,true);
	Tablero[7][4]=raja;
	Piezas* Nraja= new Raja(0,3,Tablero,false);
	Tablero[0][3]=Nraja;
	
	//cout <<"Si pase de aqui el pedo esta en el print?"<< endl;
	
}

Chatarunga::~Chatarunga()
{
}
