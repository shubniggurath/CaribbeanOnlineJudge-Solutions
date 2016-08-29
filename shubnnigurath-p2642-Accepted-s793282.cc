#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    int TC, lon, sum, pot;
    string binario;
    optimizar_io

    cin >> TC;
    while(TC--)
    {
        cin >> binario;
        lon = binario.size();
        reverse(binario.begin(), binario.begin() + lon);
        sum = 0;
        if(binario[0] == '1')
            sum += 1;
        pot = 1;
        for(int i = 1; i < lon; i++){
            pot *= 2;
            pot %= 3;
            if(binario[i] == '1'){
                sum += pot;
                sum %= 3;
            }
        }
        if(sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}