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
        ll n,k;
        cin>> n>> k;
        vector<ll> moves_needed(n+1,-1);
        moves_needed[0]=0;
        moves_needed[1]=1;
        moves_needed[2]=2;
        for(ll i=3;i<=n;i++){
            if(i%2!=0){
                moves_needed[i]=1+moves_needed[i-1];
            }else{
                moves_needed[i]=1+moves_needed[i/2];
            }
        }
        ll cnt=0;
        for(ll i=0;i<moves_needed.size();i++){
            if(moves_needed[i]>k){
                cnt++;
            }
        }
        cout<< cnt;
        nl;
    }
    return 0;
}