#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    string s;
    cin>> s;
    int n=(s.size()-1)/2;
    s.erase(n,1);
    cout<< s;
    nl;
    return 0;
}