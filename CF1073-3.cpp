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
        int cnt0=0;
        int cnt1=0;
        bool flag=0;
        int l=0;
        int r=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && flag==0){
                cnt1++;
                flag=1;
                l=i;
                cnt++;
            }
            if(flag==1 && s[i]=='0'){
                r=i;
                cnt0++;
                cnt++;
            }
        }
        if(cnt1>=1 && cnt0>=1){
            cout<< "Alice";
            nl;
            cout<< abs(l-r)+1;
            nl;
            for(int i=l;i<=r;i++){
                cout<< i+1<< " ";
            }
        }else{
            cout<< "Bob";
        }
        nl;
    }
    return 0;
}