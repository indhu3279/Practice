#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int valueof(char c){
    return c-'0';
}
bool check_characters(string T,string P,int x){
    int n=T.length();
    int m=P.length();
    for(int i=0;i<m;i++){
        if(P[i]!=T[i+x+1]){
            return false;
        }
    }
    return true;
}
void rabin_karp(string T,string P,int d,int q){
    int n = T.length();
    int m = P.length();
    int p,t0;
    int h = (int)pow(d,m-1)%q;
    for(int i=0;i<m;i++){
        p = (d*p+valueof(P[i]))%q;
        t0 = (d*t0+valueof(T[i]))%q;
    }
    for(int j=-1;j<n-m;j++){
        //cout<<p<<" "<<t0<<endl;
        if(p==t0){
            if(check_characters(T,P,j)){
                cout<<"Pattern occurs at index "<<j+1<<endl;
            }
        }
        if(j<n-m){
            t0 = (d*(t0-valueof(T[j+1]*h))+valueof(T[m+j+1]))%q;
        }
    }
}

int main(){
    string T,P;
    cin>>T>>P;
    int d,q;
    cin>>d>>q;
    rabin_karp(T,P,d,q);
}