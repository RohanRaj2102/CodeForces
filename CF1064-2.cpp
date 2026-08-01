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
        int a,b,n;
        cin>> a>> b>> n;
        if(a/n>=b){
            cout<< 1;
        }else if(a==b){
            cout<< 1;
        }else{
            cout<< 2;
        }
        nl;
    }
    return 0;
}