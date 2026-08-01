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
        int cnt0=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i]==0){
                cnt0++;
                
            }
        }
        if(cnt0==0){
            cout<< "Alice";
        }else{
            if(arr[0]==1 || arr[n-1]==1){
                cout<< "Alice";
            }else{
                cout<< "Bob";
            }
        }
        nl;
    }
    return 0;
}