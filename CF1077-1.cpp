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
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int s=0;
        int e=n-1;
        vector<int> v;
        while(s<=e){
            if(s==e){
                v.push_back(arr[s]);
                break;
            }else{
                v.push_back(arr[e]);
                v.push_back(arr[s]);
                e--;
                s++;
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<< v[i]<< " ";
        }
        nl;
    }
    return 0;
}