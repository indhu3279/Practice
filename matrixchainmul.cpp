#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int a[4] = {10,100,5,50};
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int n = 4;
    int m[n][n] = {0};
    int s[n][n] = {0};
    
    int low;
    int q,k,j;
    for(int d=1;d<n-1;d++){
        for(int i=1;i<n-d;i++){
            j = i+d;
            low = 1000000;
            for(k=1;k<=j-1;k++){
                q = m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
            }
            if(q<low){
                low = q;
                s[i][j]=k;
            }
            m[i][j]=low;
        }
    }
    cout<<low;
    
}
