#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    int a;
    cin >> a;
    vi x(a);
    vi soma;

    for(int &i:x) {
        cin >> i;
        soma.push_back(i);
    }

    for(int i = 0; i < a; i++){
        for(int j = 1; j < a; j++){
            soma.push_back(x[i]+x[j]);
        }
    }

    sort(soma.begin(), soma.end());

    for(int &i:soma) {
        cout << i << " ";
    }

    return 0;
}