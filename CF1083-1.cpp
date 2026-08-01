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
        int idx=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i]>maxi){
                maxi=arr[i];
                idx=i;
            }
        }
        swap(arr[idx],arr[0]);
        for(auto a:arr){
            cout<< a<< " ";
        }
        nl;
    }
    return 0;
}