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
        string s;
        cin>> s;
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[n-1]){
                cnt++;
            }
        }
        cout<< s.size()-cnt-1;
        nl;
    }
    return 0;
}