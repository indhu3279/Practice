// QUE:An aithmetic array is an array that contains at least two integers and the 
// differences btw consecutive integers are equal.FOr example [9,10],[3,3,3] are 
// arithmetic arrays while [2,1,2] [1,3,3,7] are not

// Sarasvati has an array of N non-negative integers. The ith integer of the array is Ai.
// She wants to choose a contiguos arithmetic subarray from her array that has the maximum
// length. Help her determine the longest contiguous arithmetic subarray


#include  "bits/stdc++.h"
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd = arr[1]-arr[0];
    int current=2,j=2;
    int ans=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            current++;
        }
        else{
            pd = arr[j]-arr[j-1];
            current = 2;
        }
        j++;
        ans = max(ans,current);
    }
    cout<<ans;

    return 0;
}