#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

struct Activity{
    int start,end;
};

bool Activity_order(Activity A1,Activity A2){
    return(A1.end<A2.end);
}
int selection(Activity A[],int n){
    sort(A[0],A[n-1],Activity_order);
    int i=0;
    cout<<"Selected activities: "<<endl;
    cout<<"("<<A[0].start<<","<<A[0].end<<")"<<endl;
    for(int j=1;j<n;j++){
        if(A[j].start>A[i].end){
            cout<<"("<<A[j].start<<","<<A[j].end<<")"<<endl;
            i = j;
        }
    }
    return 0;
}
int main(){
    int n;
    Activity A[n];
    for(int i=0;i<n;i++){
        cout<<"Enter start and end time of job: "<<i+1<<endl;
        cin>>A[i].start>>A[i].end;
    }
}
