#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

/*
Fault-> read the question carefully you didnt see that the p subarray not to be contiguous
*/
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>> s;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ans.push_back(i);
            }
        }
        cout<< ans.size();
        nl;
        for(auto i:ans){
            cout<< i+1<< " ";
        }
        nl;
    }
    return 0;
}