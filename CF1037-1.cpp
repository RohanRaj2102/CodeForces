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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        unordered_map<int,int> m1(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                m1[arr[i]]=0;
            }else{
                m1[arr[i]]=1;
            }
        }
        unordered_map<int,int> m2(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                m1[arr[i]]=1;
            }else{
                m1[arr[i]]=0;
            }
        }
        sort(arr,arr+n);
        bool first=1;
        bool second=1;
        for(int i=0;i<n-1;i++){
            if(m1[arr[i]] == m1[arr[i+1]]){
                first=0;
            }
        }
        for(int i=0;i<n-1;i++){
            if(m2[arr[i]] == m2[arr[i+1]]){
                second=0;
            }
        }
        if(first==1 || second==1){
            cout<< "YES";
        }else{
            cout<< "NO";
        }
        nl;
    }   
    return 0;
}