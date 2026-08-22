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
        int n;
        cin>> n;
        int arr[n-1];
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin>> arr[i];
            sum=sum+arr[i];
        }
        cout<< -sum;
        nl;
    }
    return 0;
}