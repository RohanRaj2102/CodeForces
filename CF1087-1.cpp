#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<<"he" 
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        ll n,c,k;
        cin>> n>> c>> k;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll x;
            cin>> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++){
            if((v[i]+k)<=c){
                c=c+(v[i]+k);
                k=0;
            }else{
                ll total=v[i]+k;
                ll val=c-v[i];
                if(val>=0){
                    c=c+c;
                    k=k-val;
                }else{
                    break;
                }
            }
        }
        cout<< c;
        nl;
    }
    return 0;
}