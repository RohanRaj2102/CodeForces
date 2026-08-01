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
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        vector<int> temp;
        temp=arr;
        sort(temp.begin(),temp.end());
        int k=INT_MAX;
        int mn=temp[0];
        int mx=temp[n-1];
        for(int i=0;i<n;i++){
            if(arr[i]!=temp[i]){
                k=min(k,max((abs(arr[i]-mn)),(abs(arr[i]-mx))));
            }
        }
        if(k==INT_MAX){
            cout<< -1;
        }else{
            cout<< k;
        }
        nl;
    }
    return 0;
}