#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);
//////////NAHI CHALA 

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    int t;
    cin>> t;
    while(t--){
        int a,b;
        cin>> a>> b;
        int x=a^b;
        bool c=1;
        if(x<=a){
            cout<< "YES";
        }else{
            for(int i=0;i<=a;i++){
                a=a^i;
                for(int j=0;j<=a;j++){
                    a=a^j;
                    if(a==b){
                        c=1;
                        break;
                    }
                }  
            }
        }
        if(c==1){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
    }
    return 0;
}