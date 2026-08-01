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
        vector<int > v;

        for(int i=0;i<n;i++){
            int x=0;
            cin>> x;
            v.push_back(x);
        }
        set<int > s(v.begin(),v.end());
        cout<< s.size();
        nl;

    }
    return 0;
}