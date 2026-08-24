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
        int n,k,x;
        cin>> n>> k>> x;
        if(x!=1){
            cout<< "Yes";
            nl;
            cout<< n;
            nl;
            for(int i=0;i<n;i++){
                cout<< 1<<" ";
            }
            nl;
        }
        else{
            if(k==1){
                cout<< "No";
                nl;
            }
            else if(k==2){
                if(n%2==0){
                    cout<< "Yes";
                    nl;
                    cout<< n/2;
                    nl;
                    for(int i=0;i<(n/2);i++){
                        cout<< 2<< " ";
                    }
                    nl;
                }
                else{
                    cout<< "No";
                    nl;
                }
            }
            else{
                if(n%2==0){
                    cout<< "Yes";
                    nl;
                    cout<< n/2;
                    nl;
                    for(int i=0;i<(n/2);i++){
                        cout<< 2<< " ";
                    }
                    nl;
                }
                else{
                    cout<< "Yes";
                    nl;
                    cout<< n/2;
                    nl;
                    for(int i=0;i<(n/2)-1;i++){
                        cout<< 2<< " ";
                    }
                    cout<< 3;
                    nl;
                }
            }
        }
    }    


    return 0;
}