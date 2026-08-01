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
        int c1=0;
        int c2=0;
        int c3=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='<'){
                c1++;
            }
            if(s[i]=='*'){
                c2++;
            }
            if(s[i]=='>'){
                c3++;
            }
        }
        string check=string(c1,'<') +  string(c2,'*') + string(c3,'>');
        if(c2>1 || check!=s){
            cout<< -1;
        }else{
            cout<< max(c1+c2,c2+c3);
        }
        nl;
    }
    return 0;
}