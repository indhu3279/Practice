Minimum Multiple
Given a collection C1 of ‘n’ positive integers and a number ‘m’ write a C program to find the minimum multiple 
of m in C1. If no such multiple exist in C1 then print ‘No multiple found’

For example, if there are seven elements 23, 24, 25, 12, 6, 7, 11 and m is 3 then the output should be 6.

Input Format

First line contains the number of elements in the collection C1, n

Next ‘n’ lines contain the elements in the collection C1

Next line contains the value of m

Output Format

Print the minimum multiple of ‘m’ present in C1 or ‘No multiple found’

//C CODE
#include<stdio.h>
int main(){
    int n,m,x=0;
    scanf("%d",&n);
    int g=n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(arr[i]%m==0){
            arr1[x]=arr[i];
            x++;
        }
    }
    if(x==0){
        printf("No multiple found");
    }
    else{
        for(int i=0;i<x-1;i++){
            for(int j=i+1;j<x;j++){
                if(arr1[i]>arr1[j]){
                    int t = arr1[j];
                    arr1[j] = arr1[i];
                    arr1[i] = t;
                }
            }
        }
        printf("%d",arr1[0]);
    }
}
