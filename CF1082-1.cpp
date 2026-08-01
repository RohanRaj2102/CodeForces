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
        int x,y;
        cin>> x>> y;
        if(y==0){
            if(x%3==0){
                cout<< "YES";
            }else{
                cout<< "NO";
            }
        }else if(y>0){
            if(x-(2*y) >= 0){
                if( (x-(2*y)) % 3==0){
                    cout<< "YES";
                }else{
                    cout<< "NO";
                }
            }else{
                cout<< "NO";
            }
        }else if(y<0){
            int yy=abs(y);
            if(x-(4*yy) >= 0){
                if( (x-(4*yy)) %3==0 ){
                    cout<< "YES";
                }else{
                    cout<< "NO";
                }
            }else{
                cout<< "NO";
            }
        }
        nl;
    }
    return 0;
}