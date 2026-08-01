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
        int n,x,y;
        cin>> n>> x>> y;
        int Tvoter=x+y;
        string bit;
        int cnt0=0;
        int cnt1=0;
        string s;
        cin>> s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
            }
            if(s[i]=='1'){
                cnt1++;
            }
        }
        int p[n];
        long long int p_sum=0;
        for(int i=0;i<n;i++){
            cin>> p[i];
            p_sum=p_sum+p[i];
        }
        if(Tvoter<p_sum){
            cout<< "NO";
        }else{
            int minA=0;
            int minB=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    minA=minA+p[i]/2+1;
                }
                if(s[i]=='1'){
                    minB=minB+p[i]/2+1;
                }
            }
            bool ansbhejdia=false;
            if(minA>x && ansbhejdia==false){
                cout<< "NO";
                ansbhejdia=true;
            }
            else if(minB>y && ansbhejdia==false){
                cout<< "NO";
                ansbhejdia=true;
            }
            else if(cnt1==0){
                if(x>=y+n){
                    cout<< "YES";
                }else{
                    cout<< "NO";
                }
            }
            else if(cnt0==0){
                if(y>=x+n){
                    cout<< "YES";
                }else{
                    cout<< "NO";
                }
            }else{
                cout<< "YES";
            }
        }
        
        nl;
    }


    return 0;
}