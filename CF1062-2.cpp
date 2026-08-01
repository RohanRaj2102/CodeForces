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
        string temp;
        cin>> temp;
        int arrs[26]={0};
        int brr[26]={0};
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            arrs[idx]++;
        }
        for(int i=0;i<temp.size();i++){
            brr[temp[i]-'a']++;
        }
        bool b=1;
        for(int i=0;i<26;i++){
            if(arrs[i]!=brr[i]){
                b=0;
            }
        }
        
        if(b==1){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        nl;
    }


    return 0;
}