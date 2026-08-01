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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        vector<int> temp;
        temp=arr;
        sort(temp.begin(),temp.end(), greater<int> ());

        int s=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=temp[i]){
                s=i;
                break;
            }
        }
        int val=temp[s];
        int e=0;
        for(int i=0;i<n;i++){
            if(arr[i]==val){
                e=i;
                break;
            }
        }
        while(s<=e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }

        for(auto z:arr){
            cout<< z<< " ";
        }
        nl;
    }
    return 0;
}