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
        int brr[n];
        int crr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        for(int i=0;i<n;i++){
            cin>> brr[i];
        }
        for(int i=0;i<n;i++){
            cin>> crr[i];
        }
        
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            bool flag=1;
            for(int j=0;j<n;j++){
                if(arr[j]>=brr[(j+i)%n]){
                    flag=0;
                }
            }
            if(flag==1){
                cnt1++;
            }
        }
        for(int j=0;j<n;j++){
            bool flag=true;
            for(int k=0;k<n;k++){
                if(brr[k]>=crr[(k+j)%n]){
                    flag=false;
                }
            }
            if(flag==true){
                cnt2++;
            }
        }
       // ll ans=n*cnt1*cnt2;
        cout<< (long long )n*cnt1*cnt2;
        nl;
    }
    return 0;
}