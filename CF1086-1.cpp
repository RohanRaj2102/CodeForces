#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n][n];
        int freq[(n*n)+1]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>> arr[i][j];
                freq[arr[i][j]]++;
            }
        }
        int maxi=0;
        for(int i=0;i<n*n;i++){
            if(freq[i]>maxi){
                maxi=freq[i];
            }
        }
        int size=(n*n)-n;
        if(n==1){
            cout<<"NO";
        }
        else{
            if(maxi>size){
                cout<< "NO";
            }else{
                cout<< "YES";
            }
        }
        nl;
    }
    return 0;
}