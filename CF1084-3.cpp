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
        
        for(int i=0;i<n;i++){
            char prevch;
            int prevchidx=0;
            int flag=0;
            for(int j=0;j<n;j++){
                if(s[j]=='*'){
                    continue;
                }
                else if(s[j]!='*' && flag==0){
                    prevch=s[j];
                    prevchidx=j;
                    flag=1;
                }
                else if(s[j]==prevch){
                    s[j]='*';
                    s[prevchidx]='*';
                    flag=0;
                }else if(s[j]!=prevch && s[j]!='*'){
                    prevch=s[j];
                    prevchidx=j;
                }
            }
        }
        bool b=1;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                b=0;
                break;
            }
        }
        if(b==0){
            cout<< "NO";
        }else{
            cout<< "YES";
        }
        nl;
    }
    return 0;
}