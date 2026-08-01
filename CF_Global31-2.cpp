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
        string ans="";
        while(n--){
            string s;
            cin>> s;
 
            if(s + ans < ans + s){
                ans=s + ans;
            }else{
                ans=ans + s;
            }
        }
        cout<< ans;
        nl;
    }
    return 0;
}
 