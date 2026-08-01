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
        int m,a,b,c;
        cin>> m>> a>> b>> c;
        int ans=0;
        int row1vacc=0;
        int row2vacc=0;

        if(a<=m){
            ans=ans+a;
            row1vacc=m-a;
        }else{
            ans=ans+m;
        }
        if(b<=m){
            ans=ans+b;
            row2vacc=m-b;
        }else{
            ans=ans+m;
        }
        int totalvacc=row1vacc+row2vacc;
        if(totalvacc<=c){
            ans=ans+totalvacc;
        }else{
            ans=ans+c;
        }
        cout<< ans;
        nl;
    }
    return 0;
}