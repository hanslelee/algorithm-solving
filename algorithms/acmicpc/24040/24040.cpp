#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long t;
vector<long long> ans;

void check(long long n) {
    if(n%9 == 0 || n%3 == 2) cout << "TAK\n";
    else cout << "NIE\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

    cin >> t;

    long long n;
    for(int i=0; i<t; i++) {
        cin >> n;
        check(n);
    }

  
    return 0;
}