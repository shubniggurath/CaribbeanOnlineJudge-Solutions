#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int barrido(char flecha,int compra, string cadena){
	int tam = cadena.size(), comp = compra, fin = 0, tamFlecha = 0, aux = 0, res = 0,tamParcial = 0;
	vector<int> v;
	//vector<int> todos;
	
	while(fin < tam){
		if(flecha == cadena[fin]){
			tamFlecha ++;
			//todos.push_back(tamFlecha);
			tamParcial = tamFlecha - aux;
		} else if(flecha != cadena[fin]){
			if(comp > 0){
				comp --;
				tamFlecha ++;
				//todos.push_back(tamFlecha);
				v.push_back(tamFlecha);
				tamParcial = tamFlecha;
			} else{
				if(!v.empty()){
					//cout<<"//";
					int tamAux = tamFlecha;
					//tamParcial = (v[0]-aux);
					aux = v[0];
					//todos.erase(todos.begin(),todos.begin()+tamParcial);
					//cout<<tamAux<<"-"<<v[0]<<"! ";
					tamAux -= v[0];
					v.erase(v.begin());
					tamParcial = tamAux + 1;
					tamFlecha ++;
					//todos.push_back(tamFlecha);
					v.push_back(tamFlecha);
				} else{
					tamFlecha = 0;
					tamParcial = 0;
				}
			}
		}
		
		//cout<<tamParcial<<" ";
		fin ++;
		res = max(res,tamParcial);
	}

	return res;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int a,s;
	string flechas;
	cin>> a;

	while(a--){
		cin>> s >> flechas;
		int x = barrido('<',s, flechas);
		int y = barrido('>',s, flechas);
		cout<<max(x,y)<<"\n";
	}

	return 0;
}