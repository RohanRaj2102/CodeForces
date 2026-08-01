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
        int n,l,h;
        cin>> n>> h>> l;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        vector<int> arr;
        for(auto a:v){
            if(a<=l || a<=h){
                arr.push_back(a);
            }
        }
        sort(arr.begin(),arr.end());
        int tab[h][l];
        for(int i=0;i<h;i++){
            for(int j=0;j<l;j++){
                tab[i][j]=0;
            }
        }
        if(arr.size()%2==0){
            for(int i=0;i<arr.size();i=i+2){
                int x=arr[i]-1;
                int y=arr[i+1]-1;
                if(x<=h-1 && y<=l-1){
                    tab[x][y]++;
                }else{
                    swap(x,y);
                    if(x<=h-1 && y<=l-1){
                        tab[x][y]++;
                    }
                }
            }
        }else{
            for(int i=0;i<arr.size()-1;i=i+2){
                int x=arr[i]-1;
                int y=arr[i+1]-1;
                if(x<=h-1 && y<=l-1){
                    tab[x][y]++;
                }else{
                    swap(x,y);
                    if(x<=h-1 && y<=l-1){
                        tab[x][y]++;
                    }
                }
            }
        }
        int sum=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<l;j++){
                cout<< tab[i][j]<< " ";
            }
            nl;
        }
       // cout<< sum;
        nl;
    }
    return 0;
}