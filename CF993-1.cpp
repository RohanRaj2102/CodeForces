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
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if((i+j)==n){
                    cnt++;
                }
            }
        }
        cout<< cnt;
        nl;
    }


    return 0;
}