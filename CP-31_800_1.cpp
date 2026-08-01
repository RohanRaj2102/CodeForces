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
        bool isSorted=1;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(i>0){
                if(arr[i]<arr[i-1]){
                    isSorted=0;
                }
            }
        }
        if(isSorted==1){
            cout<< "YES";
        }else{
            if(k>=2){
                cout<< "YES";
            }else{
                cout<< "NO";
            }
        }
        nl;
    }
    return 0;
}