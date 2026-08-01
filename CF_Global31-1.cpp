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
        int l,a,b;
        cin>> l>> a>> b;
        int maxi=INT_MIN;
        int val=a;
        for(int i=0;i<l;i++){
            val=val+b;
            int max=(val)%l;
            if(max>maxi){
                maxi=max;
            }
        }
        cout<< maxi;
        nl;
    }
    return 0;
}