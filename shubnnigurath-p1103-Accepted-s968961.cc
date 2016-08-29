#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int tabla[10][7489];


int cont(int datos[], int tam, int cant){
	if(cant == 0){
		return 1;
	}

	if(cant < 0){
		return 0;
	}

	if(cant > 0 && tam <= 0){
		return 0;
	}

	if(tabla[tam][cant] != -1){
		return tabla[tam][cant];
	}

	return tabla[tam][cant] = cont(datos, tam - 1, cant) + cont(datos, tam, cant - datos[tam - 1]);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int datos[] = {1,5,10,25,50};
	int cantidad;
	memset(tabla,-1,sizeof tabla);

	while(cin>>cantidad){
		cout<< cont(datos,5,cantidad)<<"\n";
	}

	return 0;
}