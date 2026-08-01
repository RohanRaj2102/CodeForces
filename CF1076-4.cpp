#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<ll> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (ll i = a; i < b; i++)

int main(){
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0;i<n;i++){
            cin>> a[i];
        }
        for(ll i=0;i<n;i++){
            cin>> b[i];
        }
        sort(a.begin(),a.end());
        ll total[n]={0};
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum=sum+b[i];
            total[i]=sum;
        }
        vector<ll> score(n,0);
        for(ll i=0;i<n;i++){
            ll difflevel=a[i];
            ll swords=n-i;
            ll s=0;
            ll e=n-1;
            ll mid=s+((e-s)/2);
            while(s<e){
                if(total[mid] > swords){
                    e=mid-1;
                }
                else if(total[mid] < swords){
                    s=mid+1;
                }else{
                    break;
                }
                mid=s+((e-s)/2);
            }
            if(total[mid]<=swords){
                ll levelscomp=mid+1;
                score[i]=(difflevel*levelscomp);
            }
        }
        ll mx= *max_element(score.begin(),score.end());
        cout<< mx;
        nl;
    }
    return 0;
}