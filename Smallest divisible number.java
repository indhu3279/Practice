//SMALLEST DIVISIBLE NUMBER

//c++ code
/*#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}000
int main(){
    int n;
    cin>>n;
    int arr[n];
    int g=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            arr[g] = i;
            g++;
        }
    }
    int lcm = arr[0];
    for(int i=1;i<g;i++){
        lcm = lcm*arr[i]/gcd(lcm,arr[i]);
    }
    if(lcm<=10000000){
        cout<<lcm;
    }else{
        cout<<"No such number in range";
    }
    
}/*

//Java code
import java.util.*;
class B{
long gcd(long a,long b){
if(b==0){
return a;}
return gcd(b,a%b);
}}
class Main{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);
B obj = new B();
int n=sc.nextInt();
long arr[] = new long[n];
int g=0;
for(int i=1;i<=n;i++){
    if(i%2==0){
         arr[g] = i;
         g++;
    }
}
    long lcm = arr[0];
    for(int i=1;i<g;i++){
        lcm = lcm*arr[i]/obj.gcd(lcm,arr[i]);
    }
    if(lcm<=10000000){
        System.out.println(lcm);
    }else{
        System.out.println("No such number in range");
    }
}
}

