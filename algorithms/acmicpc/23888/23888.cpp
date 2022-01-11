#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long a, d, q, n, l, r;
vector<long long> ans;

long long gcd(long long x, long long y) {
    if(y == 0) return x;
    return gcd(y, x % y);
}

long long q1() {
    long long al =  a + d * (l-1);
    long long ar =  a + d * (r-1);
    return ((r-l+1) * (al + ar)) / 2;
}

long long q2() {
    return gcd(a,d);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

    cin >> a >> d;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> n >> l >> r;
        if(n == 1) {
            ans.push_back(q1());
        } else {
            if(l == r) ans.push_back(a + d * (l - 1));
            else ans.push_back(q2());
        }
    }

    for(auto i : ans) cout << i << '\n';

  
    return 0;
}