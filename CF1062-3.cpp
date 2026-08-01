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
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(odd!=0 && even!=0){
            sort(arr,arr+n);
            for(int i=0;i<n;i++){
                cout<< arr[i]<< " ";
            }
        }else{
            for(int i=0;i<n;i++){
                cout<< arr[i]<< " ";
            }
        }
        nl;
    }
    return 0;
}