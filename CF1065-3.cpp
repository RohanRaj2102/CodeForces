#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)
/*int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        for(int i=0;i<n;i++){
            cin>> brr[i];
        }
        int a=0;
        int m=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){  ///////////////// isko check karo
                if((i+1)%2==0){
                    m++;
                }else{
                    a++;
                }
            }
        }
        if(a>m){
            cout<< "Ajisai";
        }else if(a<m){
            cout<< "Mai";
        }else{
            cout<< "Tie";
        }
        nl;
    }
    return 0;
}*/
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        int brr[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            ans=ans^arr[i];
        }
        for(int i=0;i<n;i++){
            cin>> brr[i];
            ans=ans^brr[i];
        }
        if(ans==0){
            cout<< "Tie";
        }else{
            for(int i=n-1;i>=0;i--){
                if(arr[i]!=brr[i]){
                    if((i+1)%2==0){
                        cout<< "Mai";
                        break;
                    }else{
                        cout<< "Ajisai";
                        break;
                    }
                }
            }
        }
        nl;
    }
    return 0;
}