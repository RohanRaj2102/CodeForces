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
        int n,s,m;
        cin>> n>> s>> m;
        
        int l[n];
        int r[n];
        bool yes=0;
        for(int i=0;i<n;i++){
            cin>> l[i]>> r[i];
        }
        int curr=0;
        for(int i=0;i<n;i++){
            if(abs(curr-l[i])>=s){
                cout<< "YES";
                yes=1;
                break;
            }
            curr=r[i];
        }
        if(yes==0){
            if(abs(m-curr)>=s){
                cout<< "YES";
            }else{
                cout<< "NO";
            }
        }
        nl;
    }


    return 0;
}