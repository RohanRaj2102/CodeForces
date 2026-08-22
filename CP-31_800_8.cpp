#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<<"he" 
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n>> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        bool f=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                cout<< "Yes";
                f=1;
                break;
            }
        }
        if(f==0){
            cout<< "No";
        }
        nl;
    }
    return 0;
}