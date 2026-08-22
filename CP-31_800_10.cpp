#include<bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
#define hi cout<<"hi" 
#define ho cout<<"ho" 
#define he cout<<"he" 
#define nl cout<<endl
#define pb push_back
#define ite(i,a,b) for (int i = a; i < b; i++)

int main(){
    fastio()
    int t;
    cin>> t;
    while(t--){
        char arr[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>> arr[i][j];
            }
        }
        int sum=0;
        int is=0;
        int ie=9;
        int js=0;
        int je=9;
        while(is<ie && js<je){
            for(int j=js;j<=je;j++){
                if(arr[is][j]=='X'){
                    sum=sum+(is+1);
                }
            }
            is++;
            for(int i=is;i<=ie;i++){
                if(arr[i][je]=='X'){
                    sum=sum+(10-je);
                }
            }
            je--;
            for(int j=je;j>=js;j--){
                if(arr[ie][j]=='X'){
                    sum=sum+(10-ie);
                }
            }
            ie--;
            for(int i=ie;i>=is;i--){
                if(arr[i][js]=='X'){
                    sum=sum+(js+1);
                }
            }
            js++;
        }
        cout<< sum;
        nl;
    }
    return 0;
}