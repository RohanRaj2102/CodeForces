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
        int n,d;
        cin>> n>> d;
        int arr[n];
        int maxi=INT_MIN;
        int mini=INT_MAX;
    
        for(int i=0;i<n;i++){
            cin>> arr[i];
            
        }
        sort(arr,arr+n);
        bool b=1;
        for(int i=0;i<n;i++){
            if(abs(arr[n-1-i]-arr[i])>d){
                b=0;
                break;
            }
        }
        
        if(b==1){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        nl;
    }

    return 0;
}