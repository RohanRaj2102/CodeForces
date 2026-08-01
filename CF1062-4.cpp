#include<bits/stdc++.h>
#include <numeric>
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
        bool b=1;
        int j=0;
        for(int i=2;i<=100;i++){
            if(__gcd(i,arr[j])==1){
                cout<< i;
                b=0;
                break;
            }
            j++;
        }
        if(b==1){
            cout<< -1;
        }
        nl;
    }


    return 0;
}