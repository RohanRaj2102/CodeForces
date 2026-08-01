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
        int arr[n][n];
        int cnt=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=cnt;
                cnt++;
            }
        }
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=arr[i][j];
                if(i-1>=0){
                    sum=sum+arr[i-1][j];
                }
                if(i+1<=n-1){
                    sum=sum+arr[i+1][j];
                }
                if(j-1>=0){
                    sum=sum+arr[i][j-1];
                }
                if(j+1<=n-1){
                    sum=sum+arr[i][j+1];
                }
                if(sum>maxi){
                    maxi=sum;
                }
            }
        }
        cout<< maxi;
        nl;
    }


    return 0;
}