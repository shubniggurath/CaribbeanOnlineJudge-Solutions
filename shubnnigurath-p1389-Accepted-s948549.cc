#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>   
using namespace std;

bool EsPalindromo(string palabra){
	int tam = palabra.size();
	for(int x = 0; x<tam;x++){
		if(palabra[x] != palabra[tam-(x+1)])
			return false;
	}
	return true;
}

string buscarPalindromo(string palabra){
	int tam = palabra.size(), ini = 0,fin = 0,maximo =1;
	string palindromoAnterior = "-1", auxPalindromo;
	for(int x = 0; x<tam;x++){
		bool bandera;
		for(int y = x; y<=tam;y++){
			//donde me posiciono y cuanto avanzo
			auxPalindromo = palabra.substr(x,y-x);
			bandera = EsPalindromo(auxPalindromo);
			if(bandera){
				//cout<<auxPalindromo<<" "<<x<<" "<<y <<"\n";
				if(palindromoAnterior.compare(auxPalindromo) != 0){
					if((y-x) > maximo ){
						maximo = (y-x);
						ini = x;
						fin = y-x;
						palindromoAnterior = auxPalindromo;
					}
				} else{
					//cout<<palindromoAnterior<<" "<<auxPalindromo<<"\n";
					maximo = 0;
				}
			}
		}
	}

	return palabra.substr(ini,fin);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	string palabra;
	getline(cin,palabra);
	cout<<buscarPalindromo(palabra);
	return 0;
}