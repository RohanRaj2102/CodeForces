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
        vector<int> v(1001,0);
        for(int i=0;i<n;i++){
            cin>> arr[i];
            v[arr[i]]=1;
        }
        set<int> s(arr,arr+n);
        int diff=s.size();
        while(1){
            if(v[diff]==1){
                cout<< diff;
                break;
            }else{
                v[diff]=1;
            }
            diff++;
        }
        nl;
    }
    return 0;
}