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
        string s;
        cin>> s;
        int n=s.size();
        string b;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='q'){
                b.push_back('p');
            }
            if(s[i]=='w'){
                b.push_back('w');
            }
            if(s[i]=='p'){
                b.push_back('q');
            }
        }
        
        cout<< b;
        nl;
    }
    return 0;
}