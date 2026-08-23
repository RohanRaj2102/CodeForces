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
        int arr[n];
        bool sorted=1;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(i!=0 && arr[i]<arr[i-1]){
                sorted=0;
            }
        }
        if(sorted==0){
            cout<< 0;
        }else{
            int mindiff=INT_MAX;
            for(int i=0;i<n-1;i++){
                if(abs(arr[i]-arr[i+1]) < mindiff){
                    mindiff=abs(arr[i]-arr[i+1]);
                }
            }
            if(mindiff==0){
                cout<< 1;
            }else{
                cout<< (mindiff/2 +1);
            }
        }
        nl;
    }
    return 0;
}