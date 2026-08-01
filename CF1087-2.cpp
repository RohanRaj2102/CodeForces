#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<ll> vi;
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
        ll n;
        cin>> n;
        vector<ll> v(n);
        for(auto &a:v){
            cin>> a;
        }
        for(ll i=0;i<n;i++){
            ll val=v[i];
            ll gcnt=0;
            ll lcnt=0;
            for(ll j=i+1;j<n;j++){
                if(v[j]<val){
                    lcnt++;
                }
                if(v[j]>val){
                    gcnt++;
                }
            }
            cout<< max(gcnt,lcnt)<<" ";
        }
        nl;
    }
    return 0;
}