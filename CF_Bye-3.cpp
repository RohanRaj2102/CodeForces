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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>> arr[i];
        ll x=0;
        vector<ll> left(n,0);
        vector<ll> right(n,0);

        left[1]=arr[0];
        if(n>2){
            for(int i=1;i<n-1;i++){
                left[i+1]=left[i]+abs(arr[i]);
            }
        }
        right[n-2]=-arr[n-1];
        if(n>2){
            for(int i=n-2;i>=1;i--){
                // cout<< "arr[i+1]"<< arr[i+1];
                // nl;
                right[i-1]=right[i]-arr[i];
            }
        }
        // for(auto a:left){
        //     cout<< a<< " ";
        // }
        // nl;
        // for(auto b: right){
        //     cout<< b<< " ";
        // }
        // nl;
        long long int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(ll)left[i]+right[i]);
        }
        x=maxi;
        cout<< x;
        nl;
    }
    return 0;
}