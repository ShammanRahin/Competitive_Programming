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
        vector<ll>vp(n,0);
        ll ans=0;
        for(int i  =  0 ; i < n ; i++){
            cin>>vp[i];
        }
        for(int i = 1 ; i < 60 ; i++ ){
            set<ll>sp;
            ll k = 1LL << i ;
            for(auto a : vp){
                sp.insert(a%k);

            }
            if(sp.size()==2){
                ans=k;
                break;
            }


        }
        cout<<ans<<endl;
    }

    return 0;
}
