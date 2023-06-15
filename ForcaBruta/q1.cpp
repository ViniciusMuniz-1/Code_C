#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;


int main(){
    int a;
    cin >> a;
    vi x(a);

    for(int &i: x) cin >> i;

    int soma;
    cin >> soma;

    int ans=0;

    for(int i = 0; i < a ; ++i){
        for(int j = 0; j < a; ++j){
            if(x[i]+x[j] == soma){
                cout << x[i] << "+" << x[j] << " ";
            }
        }
    }

    return 0;
}