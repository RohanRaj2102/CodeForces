#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    int t;
    cin>> t;
    while(t--){
        ll n,p;
        cin>> n>> p;
        vector<pair<ll,ll> > v(n);
        for(ll i=0;i<n;i++){
            cin>> v[i].second;
        }
        for(ll i=0;i<n;i++){
            cin>> v[i].first;
        }
        sort(v.begin(),v.end());
        if(v[0].first>=p){
            cout<< (n*p);
        }else{
            ll N=n-1;
            ll ans=p;
            ll i=0;
            while(N>0 && v[i].first<p && i<n){
                ans=ans+ v[i].first * min(N,v[i].second);
                N=N-min(N,v[i].second);
                i++;
            }
            if(N>0){
                ans=ans+(N*p);
            }
            cout<< ans;
        }
        nl;
    }
    return 0;
}