#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

typedef vector<double> vi;

int main(){
    int n, ans=0;
    cin >> n;

    int nums[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    for(int i = 8; i >= 0; i--){
        if(n >= nums[i]){
            ans+= n/nums[i];
            n = n%nums[i];
        }
    }

    cout << ans+n;

}