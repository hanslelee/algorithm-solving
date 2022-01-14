#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, m;
int A[10001];
long long numOfCases;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    cin >> n >> m;

    for(int i=0;i<n;i++) {
        cin >> A[i];
    }
    
    long long sum =0;
    int a=0, b=0;
    while(1) {
        if(sum >= m) sum -= A[a++];
        else if(b == n) break;
        else sum += A[b++];
        if(sum == m) numOfCases++;
    }


    cout << numOfCases;
  
    return 0;
}