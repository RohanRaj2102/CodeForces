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
        ll s,k,m;
        cin>> s>> k>> m;
        if(s<k){
            cout<< max((s-(m%k)),(long long)0);
        }else{
            if((m/k)%2==0){
                cout<< s-(m%k);
            }else{
                cout<< k-(m%k);
            }
        }
        nl;
    }
    return 0;
}