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
        int loser=0;
        int cnt=0;
        while(n!=1){
            int val=n/2;
            n=n-val;
            cnt=cnt+val;
            loser=loser+val;
        }
        while(loser!=1){
            int val=loser/2;
            loser=loser-val;
            cnt=cnt+val;
        }
        cout<< cnt+1;
        nl;
    }
    return 0;
}