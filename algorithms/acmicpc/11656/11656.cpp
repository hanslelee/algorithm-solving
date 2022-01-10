#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;
vector<string> v;
int strLength;


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

  cin >> str;
  strLength = str.length();
  for(int i=0; i< strLength; i++ ) {
      v.push_back(str.substr(i, strLength - i));
  }

  sort(v.begin(), v.end());

  for(int i=0;i<strLength;i++) {
      cout << v[i] << '\n';
  }
  
  return 0;
}