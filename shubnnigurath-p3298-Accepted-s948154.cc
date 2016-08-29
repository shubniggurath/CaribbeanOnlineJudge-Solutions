#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double formula(double l){
	return (sqrt(3)/4)*pow(l,2.0);
}

double fractal(double l,int s) {
 	if (s < 0)
	  return 0;
	return fractal(l/3,s-1)*4+formula(l);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int casos, l,s;
	cin >> casos;
	cout << fixed << setprecision(2);
	while(casos --){
		cin >>l >> s;
		cout << fractal(l*1.0,s)<<"\n";
	}
	return 0;	
}