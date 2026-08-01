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
    int n;
    cin>> n;
    string s;
    cin>> s;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            cnta++;
        }
        if(s[i]=='b'){
            cntb++;
        }
    }
    int vala=-1;
    int valb=-1;
    if(cnta==cntb){
        cout<< 0;
    }else{
        if(cnta>cntb){
            int vala=cnta-cntb;
        }else{
            int valb=cntb-cnta;
        }
    }
    if(vala>0){
        bool b=0;
        int i=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                cnt++;
                if(cnt==vala){
                    b=1;
                    break;
                }
            }
            else{
                cnt=0;
            }
        }
        if(b==0){
            cout<< -1;
        }else{
            cout<< vala;
        }
    }
    else if(valb>0){
        bool b=0;
        int i=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                cnt++;
                if(cnt==vala){
                    b=1;
                    break;
                }
            }
            else{
                cnt=0;
            }
        }
        if(b==0){
            cout<< -1;
        }else{
            cout<< valb;
        }
    }
    return 0;
}