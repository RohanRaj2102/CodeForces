#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ll long long 
#define ite(i,a,b) for (int i = a; i < b; i++)//Approach is separate 
///////////////the variables 

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        ll int sum=0;
        ll ans=0;
        ll max_val=0;
        for(int i=1;i<=n;i++){
            max_val=max(max_val,-(ll)i*i+i+sum);
            cin>> arr[i-1];
            sum=sum+arr[i-1];
            ans=max(ans,(ll)i*i+i-sum+max_val);
        }
        cout<< ans+sum;
        nl;
    }
    return 0;
}