#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<<"he" 
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
        bool found=0;
        cin>> s;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                found=1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
            }
        }
        if(found==1){
            cout<< 2;
        }else{
            cout<< cnt;
        }
        nl;
    }
    return 0;
}   