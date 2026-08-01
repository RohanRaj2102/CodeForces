#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

/*
A much simple solution...
we can say max avg of any sub array can not go beyond the max number present in the main array so, the max avg would be the max no.
thora jyada socha karo
*/

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
        int maxavg=0;
        for(int i=0;i<n;i++){
            int sum=0;
            int avg=0;
            for(int j=i;j<n;j++){
                sum=sum+arr[j];
                avg=sum/((j-i)+1);
                if(avg>maxavg){
                    maxavg=avg;
                }
            }
        }
        cout<< maxavg;
        nl;
    }
    return 0;
}