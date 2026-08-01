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
        bool six=0;
        bool five=0;
        for(int i=0;i<=n-4;i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='6'){
                six=1;
                break;
            }
        }
        for(int i=0;i<=n-4;i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5'){
                five=1;
                break;
            }
        }
        
        if(six==1){
            cout<< 0;
        }else if(five==0){
            cout<< 0;
        }else if(five==1){
            cout<< 1;
        }
        nl;
    }


    return 0;
}