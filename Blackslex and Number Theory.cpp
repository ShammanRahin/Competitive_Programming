#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin>>n;
        priority_queue<int, vector<int>, greater<int>> vp;
        ll ans=0;
        for(int i  =  0 ; i < n ; i++){
            int x;
            cin>>x;
            vp.push(x);
        }
        int a0 = vp.top();
        vp.pop();
        int a1 = vp.top();
        cout<<max(a0,a1-a0)<<endl;
    }

    return 0;
}
