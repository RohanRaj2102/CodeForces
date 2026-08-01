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
        int n,s,x;
        cin>> n>> s>>x;
        int sum=0;
        for(int i=0;i<n;i++){
            int val;
            cin>> val;
            sum=sum+val;
        }
        if(sum==s){
            cout<< "YES";
        }else if(sum<s){
            int diff=s-sum;
            if(diff%x==0){
                cout<< "YES";
            }else{
                cout<< "NO";
            }
        }else{
            cout<< "NO";
        }
        nl;
    }
    return 0;
}