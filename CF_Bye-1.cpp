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
        bool b=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='Y' && s[i+1]=='Y'){
                b=0;
                break;
            }
        }
        bool flag=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='Y'){
                flag=1;
            }
            if(flag==1 && s[i]=='N' && s[i+1]=='Y'){
                b=0;
                break;
            }

        }
        if(b==1){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        nl;
    }
    return 0;
}