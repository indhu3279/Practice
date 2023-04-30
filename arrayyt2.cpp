// Isyana is given the number of visitors at her local theme park on N consecutive days. The
// number of visitors on the i-th day is V₁. A day is record breaking if it satisfies both of the
// following conditions:
// ->The number of visitors on the day is strictly larger than the number of visitors on each
// of the previous days.
// ->Either it is the last day, or the number of visitors on the day is strictly larger than the
// number of visitors on the following day.
// ->Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    int max = arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(max==arr[i]&&arr[i]>arr[i+1]){
            c++;
        }
    }
    cout<<c;
}