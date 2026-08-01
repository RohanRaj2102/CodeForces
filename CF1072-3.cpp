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
        ll ans=0;
        ll cnt=0;
        if(n==k){
            cout<< 0;
        }else if(n<k){
            cout<< -1;
        }else{
            set<ll> s;
            s.insert(n);
            while(s.size()!=0){
                cnt++;
                set<ll> temp;
                for(auto i:s){
                    ll a=i/2;
                    ll b=(i+1)/2;
                    if(a==k || b==k){
                        ans=cnt;
                        break;
                    }
                    if(a>k){
                        temp.insert(a);
                    }
                    if(b>k){
                        temp.insert(b);
                    }
                }
                s=temp;
            }
            if(ans==0){
                cout<< -1;
            }else{
                cout<< ans;
            }
        }
        nl;
    }
    return 0;
}