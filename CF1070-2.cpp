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
        string s;
        cin>> s;
        int maxi=0;
        bool flag=false;
        int cnt0=0;
        for(int i=0;i<(2*n);i++){
            if(s[i%n]=='0' && flag==false){
                flag=true;
                cnt0++;
            }
            else if(flag==true && s[i%n]=='0'){
                cnt0++;
            }
            else if(flag==true && s[i%n]=='1'){
                flag=false;
                maxi=max(maxi,cnt0);
                cnt0=0;
            }
        }
        cout<< maxi;
        nl;
    }
    return 0;
}