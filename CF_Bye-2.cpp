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
        string s;
        cin>> s;
        int n=s.size();
        int cnt=0;
        if(s[0]=='u'){
            s[0]='s';
            cnt++;
        }
        if(s[n-1]=='u'){
            s[n-1]='s';
            cnt++;
        }
        for(int i=1;i<=n-2;i++){
            if(s[i]=='u' && s[i+1]=='u'){
                cnt++;
                s[i+1]='s';
            }
        }
        // cout<< s;
        // nl;
        cout<< cnt;
        nl;
    }    
    return 0;
}