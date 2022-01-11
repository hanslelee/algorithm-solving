#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, a;
long long x, y;

long long sumInv() {
    return n-a;
}

long long gcd(long long x, long long y) {
    if(y == 0) return x;
    return gcd(y, x%y);
}

long long mulInv(long long a, long long b, long long &x, long long &y) {
    // 확장 유클리드 호제법
    if(b == 0) {x = 1; y = 0; return a;}
    long long result = mulInv(b, a % b, x, y);
    long long temp = y;
    y = x - (a / b) * y;
    x = temp;
    if(x <= 0) {x += b; y -= a;}
    return result;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

    cin >> n >> a;

    cout << sumInv() << ' ';
    if(gcd(n,a)!=1) x = -1;
    else mulInv(a, n, x, y);
    cout << x;

  
    return 0;
}