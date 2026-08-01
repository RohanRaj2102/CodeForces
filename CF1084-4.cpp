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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        vector<int> mid;
        int mini=INT_MAX;
        
        for(int i=x;i<y;i++){
            mid.push_back(arr[i]);
            if(arr[i]<mini){
                mini=arr[i];   
            }
        }
        int minidx=0;
        int mn=INT_MAX;
        for(int i=0;i<mid.size();i++){
            if(mid[i]<mn){
                mn=mid[i];
                minidx=i;
            }
        }
        vector<int> rest;
        for(int i=0;i<x;i++){
            rest.push_back(arr[i]);
        }
        for(int i=y;i<n;i++){
            rest.push_back(arr[i]);
        }
        vector<int> ansMid;
        int size=mid.size();
        for(int i=0;i<size;i++){
            ansMid.push_back(mid[minidx%size]);
            minidx++;
        }
        int idx=rest.size();
        for(int i=0;i<rest.size();i++){
            if(rest[i]>mini){
                idx=i;
                break;
            }
        }
        vector<int> finalans;
        for(int i=0;i<idx;i++){
            finalans.push_back(rest[i]);
        }
        for(auto a:ansMid){
            finalans.push_back(a);
        }
        for(int i=idx;i<rest.size();i++){
            finalans.push_back(rest[i]);
        }
        for(auto a:finalans){
            cout<< a<< " ";
        }
        nl;
    }
    return 0;
}