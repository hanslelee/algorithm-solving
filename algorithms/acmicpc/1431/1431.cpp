#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<string> v;

bool compare(const string& a, const string& b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        int aSum=0; int bSum = 0;
        for(int i=0; i< a.length(); i++){
            if(a[i] - '0' <= 9 && a[i] - '0' >= 0) aSum += a[i] - '0';
        }
        for(int i=0; i< b.length(); i++){
            if(b[i] - '0' <= 9 && b[i] - '0' >= 0) bSum += b[i] - '0';
        }
        if(aSum != bSum) {
            return aSum < bSum;
        } else {
            return a < b;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    cin >> n;

    string str;
    for (int i=0; i<n;i++){
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), compare);

    for(auto str : v) cout << str << '\n';
  
    return 0;
}