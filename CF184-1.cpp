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
        int n,a;
        cin>> n>> a;
        int arr[n];

        int cntleft=0;
        int cntright=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(arr[i]<a){
                cntleft++;
            }
            if(arr[i]>a){
                cntright++;
            }
        }
        if(cntleft>=cntright){
            cout<< a-1;
        }else{
            cout<< a+1;
        }
        nl;
    }
    return 0;
}