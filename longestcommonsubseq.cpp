#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    char a[n1];
    char b[n2];
    cin>>a;
    cin>>b;
    int lcs[n1+1][n2+1];
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(i==0||j==0){
                lcs[i][j]=0;
            }
            else if(a[i]==b[j]){
                lcs[i][j] = 1+lcs[i-1][j-1];
                //cout<<lcs[i][j];
            }
            else{
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    cout<<lcs[n1][n2]<<endl;
}