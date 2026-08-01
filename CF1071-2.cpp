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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum=sum+abs(arr[i]-arr[i+1]);
        }
        int mini=sum;
        for(int i=1;i<n-1;i++){
            int val=sum;
            val=val-(abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1]))+abs(arr[i-1]-arr[i+1]);
            if(val<mini){
                mini=val;
            }
        }
        int left=sum-abs(arr[0]-arr[1]);
        if(left<mini){
            mini=left;
        }
        int right=sum-abs(arr[n-1]-arr[n-2]);
        if(right<mini){
            mini=right;
        }
        
        cout<< mini;
        nl;
    }


    return 0;
}