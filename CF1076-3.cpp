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
        int n,q;
        cin>> n>> q;
        int a[n];
        int b[n];
        vector<pair<int,int>> p(q);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        for(int i=0;i<n;i++){
            cin>> b[i];
        }
        for(int i=0;i<q;i++){
            cin>> p[i].first>> p[i].second;
        }
        // for(auto a:p){
        //     cout<< a.first<< a.second;
        //     nl;
        // }
        int maxarr[n]={0};
        int prevmx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            int mx=max(a[i],b[i]);
            if(mx>prevmx){
                prevmx=mx;
            }
            maxarr[i]=prevmx;
        }
        // for(auto a:maxarr){
        //     cout<< a;
        //     nl;
        // }
        int prefixsum[n]={0};
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+maxarr[i];
            prefixsum[i]=sum;
        }

        for(int i=0;i<q;i++){
            int l=p[i].first;
            
            int r=p[i].second;

            if(l==1){
                cout<< prefixsum[r-1]<<' ';
            }else{
                cout<< prefixsum[r-1]-prefixsum[l-2]<<' ';
            }
        }
        nl;
    }
    return 0;
}