#include <bits/stdc++.h>
using namespace std;
int maxor(vector<pair<int,int>>one
      ,vector<pair<int,int>>two
      ,vector<pair<int,int>>three){
      int ans=0;
      ans += one[0].first;

int idx1 = one[0].second;

// ---- choose from two ----
int idx2;
if (two[0].second != idx1) {
    ans += two[0].first;
    idx2 = two[0].second;
} else {
    ans += two[1].first;
    idx2 = two[1].second;
}

// ---- choose from three ----
for (int i = 0; i < (int)three.size(); i++) {
    if (three[i].second != idx1 && three[i].second != idx2) {
        ans += three[i].first;
        break;  // take the best valid one
    }
}
        return ans;
        }
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
      int n;
      cin>>n;
      vector<pair<int,int>>sk;
      vector<pair<int,int>>mv;
      vector<pair<int,int>>vg;
      for(int i = 0 ; i< n ;i++){
        pair <int, int> temp;
        int x;
        cin>>x;
        temp = make_pair(x,i);
        sk.push_back(temp);
      }
      for(int i = 0 ; i< n ;i++){
        pair <int, int> temp;
        int x;
        cin>>x;
        temp = make_pair(x,i);
         mv.push_back(temp);
      }
      for(int i = 0 ; i< n ;i++){
        pair <int, int> temp;
        int x;
        cin>>x;
        temp = make_pair(x,i);
         vg.push_back(temp);
      }
      sort(sk.rbegin() , sk.rend());
      sort(mv.rbegin() , mv.rend());
      sort(vg.rbegin() , vg.rend());
      int ans=0;
        ans = max(ans , maxor(sk , vg , mv));
        ans = max(ans , maxor(vg , mv , sk));
        ans = max(ans , maxor(mv, sk , vg));
        ans = max(ans , maxor(sk , mv , vg));
        ans = max(ans , maxor(vg , sk , mv));
        ans = max(ans , maxor(mv , vg , sk));

        cout<<ans<<endl;
    }

    return 0;
}
