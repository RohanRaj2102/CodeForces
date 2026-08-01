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
            if(n==2){
                cout<< 2;
            }else if(n==3){
                cout<< 3;
            }else if(n==5){
                cout<< 1;
            }
            else if(n%2==0){
                int div2=n/2;
                if(div2%2==0){
                    cout<< 0;
                }
                else if(n%2==0 && n%3==0){
                    cout<< 0;
                }
                else if(n%2==0 && n%3!=0){
                    cout<< 0;
                }
                else if(n%2!=0 && n%3==0){
                    cout<< 1;
                }
            }
            else{
                cout<< 1;
            }
            nl;
        }
    return 0;
}