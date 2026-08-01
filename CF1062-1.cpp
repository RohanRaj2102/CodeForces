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
        int a,b,c,d;
        cin>> a>> b>> c>> d;
        if(a==b && b==c && c==d && d==a){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        nl;
    }
    return 0;
}