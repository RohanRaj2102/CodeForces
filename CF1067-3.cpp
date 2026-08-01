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
        int n,k;
        cin>> n>> k;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        for(int i=0;i<n;i++){
            cin>> brr[i];
        }
        
        if(k%2==0){
            int maxi=INT_MIN;
            int currSum=0;
            for(int i=0;i<n;i++){
                currSum=max(arr[i],currSum+arr[i]);
                maxi=max(maxi,currSum);
            }
            cout<< maxi;
        }else{
            int maxxi=INT_MIN;
            int idx=0;
            for(int i=0;i<n;i++){
                if(brr[i]>maxxi){
                    maxxi=brr[i];
                    idx=i;
                }
            }
            arr[idx]=arr[idx]+brr[idx];
            int maxi=INT_MIN;
            int currSum=0;
            for(int i=0;i<n;i++){
                currSum=max(arr[i],currSum+arr[i]);
                maxi=max(maxi,currSum);
            }
            cout<< maxi;

        }
        nl;
    }
    return 0;
}