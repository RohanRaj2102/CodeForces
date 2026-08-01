#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);//////Failed in testcase 2

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    long long int t;
    cin>> t;
    while(t--){
        long long int n,k;
        cin>> n>> k;
        string krr;
        cin>> krr;
        
        char arr[n];
        for(long long int i=0;i<n;i++){
            arr[i]='+';
        }
        if(n==1 && krr[0]=='2'){
            cout<< '-';
        }else{
            long long int i=1;
            long long int j=n;
            for(long long int x=0;x<k;x++){
                if(krr[x]=='0'){
                    arr[i-1]='-';
                    i++;
                }
                if(krr[x]=='1'){
                    arr[j-1]='-';
                    j--;
                }
                if(krr[x]=='2'){
                    arr[x]='?';
                    arr[n-x-1]='?';
                }
            }
            for(long long int i=0;i<n;i++){
                cout<< arr[i];
            }
        }
        nl;
    }
    return 0;
}