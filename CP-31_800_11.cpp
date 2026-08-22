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
        int n;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int mindiff=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            int diff=abs(0-arr[i]);
            if(diff<mindiff){
                mindiff=diff;
                ans=arr[i];
            }
        }
        cout<< mindiff;
    return 0;
}