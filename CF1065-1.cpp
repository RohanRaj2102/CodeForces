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
        if(n%2==0){
            int val=n/2;
            int ans=val/2+1;
            cout<< ans;
        }else{
            cout<< 0;
        }
        
        nl;
    }
    return 0;
}