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
        int n;
        cin>> n;
        int size=n;
        set<int> s;

        for(ll i=2;i*i<=n;i++){
            if(n==1){
                break;
            }
            while(n%i==0){
                n=n/i;
                s.insert(i);
            }
        }
        if(n!=1){
            s.insert(n);
        }
        ll k=1;
        for(auto a:s){
            k=k*a;
        }
        cout<< k;
        nl;
    }
    return 0;
}