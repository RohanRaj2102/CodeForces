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
    vector<int> cntdiv(2e5+1,0);
    for(int i=1;i<=2e5;i++){
        for(int j=i;j<=2e5;j=j+i){
            cntdiv[j]++;
        }
    }
    while(t--){
        int x,y;
        cin>> x>> y;
        int extra=abs(x-y);
        if(extra==0){
            cout<< 1<<endl;
            while(x--){
                cout<< 1<<" ";
            }
            while(y--){
                cout<< -1<<" ";
            }
        }else{
            ll ans=(cntdiv[extra] % 676767677); 
            cout<< ans<<endl;
            while(x--){
                cout<< 1<<" ";
            }
            while(y--){
                cout<< -1<<" ";
            }
        }
        nl;
    }
    return 0;
}