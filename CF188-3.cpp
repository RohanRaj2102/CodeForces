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
#define ite(i,a,b) for (ll i = a; i < b; i++)

ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}

int main(){
    fastio()
    ll t;
    cin>> t;
    while(t--){
        ll a,b,c,m;
        cin>> a>> b>> c>> m;
        ll A=m/a;
        ll B=m/b;
        ll C=m/c;
        ll AB=m/lcm(a,b);
        ll BC=m/lcm(b,c);
        ll CA=m/lcm(c,a);
        ll ABC=m/lcm(a,lcm(b,c));
        AB=AB-ABC;
        BC=BC-ABC;
        CA=CA-ABC;
        A=A-(AB+CA+ABC);
        B=B-(AB+BC+ABC);
        C=C-(BC+CA+ABC);
        cout<< A*6 + (AB+CA)*3 + ABC*2<<" ";
        cout<< B*6 + (AB+BC)*3 + ABC*2<<" ";
        cout<< C*6 + (CA+BC)*3 + ABC*2<<" ";
        nl;
    }
    return 0;
}