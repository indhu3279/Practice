
#include <iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int start,int end){
    int pivot = a[end];
    int i = (start-1);
    for(int j=start;j<=end-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[end]);
     return (i+1)
}
int randompivot(int a[],int start,int end){
    srand(time(NULL));
    int x = start + rand() % (end-start);
    swap(a[x],a[end]);
    return partition(a[],start,end);
}
void randquicksort(int a[],int start,int end){
    if(start<end){
    int partition = randompivot(a[],start,end);
    randquicksort(a[],start,partition);
    randquicksort(a[],partition+1,end);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    randquicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}