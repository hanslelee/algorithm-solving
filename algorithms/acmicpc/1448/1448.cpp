#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n;
long long a[1000001];

bool compare(long long a, long long b) {
    return a > b;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

  cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  sort(a, a+n, compare);

  for(int i=0;i<n-2;i++){
    if(a[i] < a[i+1] + a[i+2]) {
        //삼각형만들기성공
        cout << a[i] + a[i+1] + a[i+2];
        return 0;
    }
  }
  
  cout << "-1";
  
  return 0;
}