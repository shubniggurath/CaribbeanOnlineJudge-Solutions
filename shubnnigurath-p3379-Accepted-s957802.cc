#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <utility>

using namespace std;

void CalcuHelados(int tam, string personas, string helados){
	int cont = 0, cont2 = 0, x = 0;
	vector <pair<int,int>> colaEsp;
	int res[tam];

	while(cont2 < tam ){
		if(!colaEsp.empty() && colaEsp[cont].first == helados[cont2]){
			res[colaEsp[cont].second] = cont2 - colaEsp[cont].second;
			cont ++; cont2 ++;
		} else if(personas[x] == helados[cont2]){
			res[x] = 0;
			cont2 ++; x ++;
		} else{
			colaEsp.push_back({personas[x],x});
			x ++;
		}
	}	

	x = 0;
	while(x < tam){
		cout<<res[x]<<"\n";
		x++;
	}
}


int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int tam;
	string personas, helados;
	cin >> tam >> personas >> helados;
	CalcuHelados(tam, personas, helados);
	return 0;
}