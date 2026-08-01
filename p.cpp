#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)///////////  3 8 2 6 

int solve(int a,int b){
    if(a>b){
        return 1;
    }else if(a<b){
        return -1;
    }else{
        return 0;
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>> arr[i];
        }
        int ans=0;
        if( solve(arr[0],arr[2]) + solve(arr[1],arr[3]) > 0){
            ans++;
        }
        if( solve(arr[0],arr[3]) + solve(arr[1],arr[2]) > 0){
            ans++;
        }
        cout<< ans*2;
        nl;
    }
    return 0;
}