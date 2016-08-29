#include <iostream>
#include <cstdio>

using namespace std;

bool cuadrado(double H,double V,double h1, double v1, double p1, double p2,bool color){
	double nH = H * h1;
	double nV = V * v1;
	if((p1<nH && p2>nV ) || ( p1> nH && p2<nV) ){
		return color;
	} 

	if(p1>nH && p2>nV){
		// se redimenciona las coordenadas del punto al nuevo cuadro 
		return  cuadrado(H-nH,V-nV,h1,v1, p1-nH,p2-nV,!color);
	} else if(p1<nH && p2<nV){
		return cuadrado(nH,nV,h1,v1, p1,p2,!color);
	}

	return false;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int numCasos,cont=1;
	double H,V,h1,v1,p1,p2;
	bool color = false;
	while(cin>>H>>V>>h1>>v1 && ((H + V + h1 + v1) != 0.0 )){
		cout<<"Case "<<cont<<":\n";
		cin>>numCasos;
		while(numCasos--){
			cin>>p1>>p2;
			bool resultado = cuadrado( H, V, h1, v1, p1, p2,color);

			if (resultado)
				cout<< "white\n";
			else
				cout<< "black\n";
		}
		cont++;
	}
	return 0;
}
