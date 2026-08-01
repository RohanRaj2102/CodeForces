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
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    int mini=INT_MAX;
    int idx=0;
    for(int i=0;i<n;i++){
        if(v[i]<mini){
            mini=v[i];
            idx=i;
        }
    }
    cout<< idx;
    nl;
    return 0;
}