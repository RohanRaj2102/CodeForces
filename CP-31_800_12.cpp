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
    fastio();
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                ans.push_back(arr[i]);
            }else{
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        cout<< ans.size();
        nl;
        for(auto a:ans){
            cout<< a<< " ";
        }
        nl;
    }
    return 0;
}