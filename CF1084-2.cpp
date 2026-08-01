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
        bool b=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];      
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                b=1;
                break;
            }
        }
        if(b==1){
            cout<< 1;
        }else if(n==1){
            cout<< 1;
        }else{
            cout<< n;
        }
        nl;
    }
    return 0;
}