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
        int a,b,c;
        cin>> a>> b>> c;
        if(c%2==0){
            int diff=c/2;
            a+=diff;
            b+=diff;
        }
        else{
            int diff=c/2;
            a+=diff+1;
            b+=diff;
        }
        if(a==b){
            cout<< "Second";
        }else if(a>b){
            cout<< "First";
        }
        else if(a<b){
            cout<< "Second";
        }
        nl;
    }
    return 0;
}