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
        string s;
        cin>> s;
        int maxi=0;
        int mini=0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='1';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                maxi++;
            }
        }
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='0';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                mini++;
            }
        }
        cout<< (n-mini)<<" "<< maxi;
        nl;
    }
    return 0;
}