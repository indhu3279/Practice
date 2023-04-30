Common Divisor
You are given a sequence of integers. You want to find out if all the numbers have a common divisor. 
Common divisor should be greater than 1.
If there exists such a number, print "YES", otherwise print "NO".

Input Format:
The first line of the input contains an integer N, denoting the number of elements in the array.
The second line contains N space-separated integers.

Output Format:
Print "YES" or "NO" on a single line(without quotes) according to the above condition.


Example:
Input:
3
2 3 4
Output:
NO

Input:
5
5 10 15 20 25
Output:
YES

//C CODE
#include<stdio.h>
#include<stdlib.h>
int gcd1(int a,int b){
 if(a==0){
 return b;
 }
 return gcd1(b%a,a);
}
int main(){
 int n,res;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
 scanf("%d ",&arr[i]);
 //printf("%d",arr[i]);
 }
 res = arr[0];
 for(int i=1;i<n;i++){
 res = gcd1(arr[i],res);
 }
 if(res==1){
 printf("NO");
 }
 else if(res!=1){
 printf("YES");
 }
}
