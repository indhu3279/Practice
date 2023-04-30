#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n] = {{0,3,6,999,999,999,999},{3,0,2,1,999,999,999},
    {6,2,0,1,4,2,999},{999,1,1,0,2,999,4},{999,999,4,2,0,2,1},{999,999,2,999,2,0,1},{999,999,999,4,1,1,0}};

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[i][j]>arr[i][k]+arr[k][j]){
                    arr[i][j] = arr[i][k]+arr[k][j];
                }
            }
        }
    }
    cout<<"The matrix is: "<<endl;
    for(inti =0;i<n;i++){
        for(intj =0;j<nn;j++){
            cout <<cost[i][j]<<" ";
        }
        cout <<endl;
    }
} 