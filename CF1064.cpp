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
        int i=0;
        int j=n-1;
        int k=1;
        long long int ans=0;
        int first=arr[0];
        while(j>=k){
            if(arr[k]>=arr[j]){
                int val=max(first,arr[j]);
                ans=ans+val;
                first=val;
                j--;
            }else{
                int val=max(first,arr[k]);
                ans=ans+val;
                first=val;
                k++;
            }
        }
        cout<< ans;
        nl;
    }
    return 0;
}