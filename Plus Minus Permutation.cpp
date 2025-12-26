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
        ll n,x,y;
        cin>>n>>x>>y;
        ll intersection = n/((x/gcd(x,y)) *y);
        ll xs = n/x ;
        ll ys =n/y;
        xs = xs - intersection ;
        ys = ys - intersection ;
        ll sum =0;
        sum+= xs * (2*n - xs + 1) / 2;
        sum-= ys * (ys + 1) / 2;;
        cout<<sum<<endl;

    }

    return 0;
}
