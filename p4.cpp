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
        string T;
        cin>> T;
        int i=0;
        int j=0;
        int cnt=0;
        while(i<s.size() && j<T.size()){
            if(T[j]==s[i] ){
                j++;
                i++;
                cnt++;
            }
            else if(T[j]!=s[i] && s[i]=='?'){
                s[i]=T[j];
                j++;
                i++;
                
                cnt++;
            }else if(T[j]!=s[i] && s[i]!='?'){
                i++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                s[i]='a';
            }
        }
        if(cnt==T.size()){
            cout<< "YES";
            nl;
            cout<< s;
        }else{
            cout<< "NO";
        }
        nl;
    }
    return 0;
}