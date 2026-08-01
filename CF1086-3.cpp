#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            cin>> p[i].first>> p[i].second;
        }
        vector<double> dp(n+1);
        for(int i=n-1;i>=0;i--){
            dp[i]=max(dp[i+1],(p[i].first+((1-(p[i].second/100.00))*dp[i+1])));
        }
        cout<< setprecision(9)<< dp[0];
        nl;
    }
    return 0;
}