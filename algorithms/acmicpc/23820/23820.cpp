#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, a;
long long ary[2020202], check[2020202];


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i=0; i< n; i++) {
        cin >> a;
        ary[a]++;
    }
    for(int i=0; i<=1; i++) {
        if(ary[i] == 0) {
            cout << i; return 0;
        }
    }
    for(long long i = 1; i < 2020202; i++) {
        if(ary[i] == 0) continue;
        for(long long j = 1; j < 2020202; j++){
            if(i *j > 2020202) break;
            if(ary[j] == 0) continue;
            check[i*j] = true;
        }
    }
    for(int i=2;i<2020202;i++) {
        if(check[i]) continue;
        cout << i; return 0;
    }

  
    return 0;
}