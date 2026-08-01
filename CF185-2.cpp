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
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i]>1){
                cnt++;
            }
            if(arr[i]==1){
                cnt1++;
            }
        }
        bool flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=n){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<< cnt+cnt1;
        }else{
            
        }
        nl;
    }
    return 0;
}