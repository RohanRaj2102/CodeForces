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
        if(s[0]=='0' && s[1]=='0'){
            s[1]='1';
        }
        if(s[n-1]=='0' && s[n-2]=='0'){
            s[n-2]='1';
        }
        int cnt1=0;
        int prev1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
                prev1=i;
            }else{
                if(i-prev1>=3){
                    cnt1++;
                    prev1=i;
                }
            }
        }

        if(n==1){
            cout<< 1;
        }
        else{
            cout<< cnt1;
        }
        nl;
    }
    return 0;
}