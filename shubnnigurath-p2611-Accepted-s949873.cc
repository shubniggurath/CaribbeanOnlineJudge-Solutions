#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int resultado(int sobornos,vector<int> datos){
	sort(datos.begin(), datos.end());
	int tam = datos.size(), maxPartidos = 0;

	for(int x = 0; x < tam; x++){
		if( datos[x] == 0){
			if(sobornos > 0){
				sobornos -= 1;
				maxPartidos += 3;
			} else {
				maxPartidos += 1;
			}
		}
		else if( datos[x] > 0) {
			if( (sobornos - (datos[x] + 1) ) >= 0){
				sobornos -= (datos[x] + 1);
				maxPartidos += 3;
			} else if( (sobornos - (datos[x] + 1) ) == -1){
				sobornos -= (datos[x]);
				maxPartidos += 1;
			} else if( (sobornos - (datos[x] + 1) ) < 0){
				return maxPartidos;
			}
		}
	}

	return maxPartidos;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int numPartidos,sobornos,ganados,perdidos, cont = 0;
	vector<int> datos;
	
	cin>>numPartidos>>sobornos;

	while(numPartidos --){
		cin>>ganados>>perdidos;
		if( (ganados - perdidos) > 0){
			cont += 3;
		} else if( (ganados - perdidos) <= 0){
			datos.push_back(perdidos-ganados);
		}
	}

	cout<<resultado(sobornos,datos)+cont;

	return 0;
}