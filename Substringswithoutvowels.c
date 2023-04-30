Substrings without Vowels
A substring is a contiguous sequence of characters within a string. Given a string S and an integer n, 
write a C code to generate all substrings of length n without vowels. For example, if the given string S1 is
‘apple’ then substrings of S1 of length 3 are app, ppl, pple. And substrings of length 3 without vowels is only
one and it is ppl.

Note:

In C language when a string is prepared by programmer by putting characters in a character array, 
he has to place a ‘\0’ (null character) at the end explicitly

Boundary Conditions

length of the string s <=20 without spaces

n>0 and n<length of s

There is atleast one substring of length n without vowels

Input Format

First line contains a string, S in lower case

Next line contains an integer, n

Output Format

Print substrings of length n without vowels

One substring in one line


//C CODE
#include<stdio.h>
#include<string.h>
int main(){
    char arr[21];
    int n,j=0,z=0,c=0;
    scanf("%s",arr);
    scanf("%d",&n);
    int m = strlen(arr);
    int t = n-1;
    char a[n+1];
    while(t!=m){
        for(int i=j;i<=t;i++){
            a[z] = arr[i];
            z++;
        }
        a[t+1]='\0';
        for(int i=0;i<n;i++){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                c++;
                break;
            }
        }
        if(c==0){
            printf("%s\n",a);
        }
        else{
            c=0;
        }
        j++;
        t++;
        z=0;
    }
}