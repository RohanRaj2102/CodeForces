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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        int mx=*max_element(v.begin(),v.begin()+n);
        cout<< mx*n;
        nl;
    }
    return 0;
}