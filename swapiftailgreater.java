Swap If Tail Greater
To check if a number n1 is tail greater than another number n2, one has to compare
 the digits from the end of the numbers. When the digits in position ‘i’ are same for the numbers then the previous digits 
has to be compared till a conclusion can be made. If the elements in position ‘i’ and ‘i+1’ are same then do not swap.

Input Format

First line contains the number of elements in the collection, n

Next ‘n’ lines contain the numbers in the collection

Output Format

Print the elements after swapping if not in tail greater order mentioned. Print one number in one line

For example, 13 is greater than 41 since 3 the last digit of 13 is greater than 1 which is last digit of 41. 253 is greater than 153 but 
lesser than 18.

Given a collection of n integers with same number of digits, write a C code to swap adjacent elements if element in position ‘i+1’ 
is not tail greater than the element in position ‘i’. For example, given five integers 223, 131, 145, 144 and 315 after swap is done 
elements will be 131, 223, 144, 315, 145.

//JAVA CODE
import java.util.*;
class b{
int greater(long a,long b){
    if(a<0){
        a = a*(-1);
    }
    if(b<0){
        b = b*(-1);
    }
    int count1 = 0,c1=0,cn;
    long x = a;
    long y = b;
    while(a!=0){
        a = a/10;
        count1++;
    }
    while(b!=0){
        b = b/10;
        c1++;
    }
    if(count1>c1){
        cn = count1;
    }
    else if(count1<c1){
        cn = c1;
    }
    else{
        cn = c1;
    }
    a = x;
    b = y;
    for(int i=0;i<cn;i++){
        long c = a%10;
        long d = b%10;
        if(c>d){
            i = cn;
            return 1;
        }
        else if(d>c){
            i = cn;
            return 2;
        }
        else{
            a = a/10;
            b = b/10;
        }
    }return 0;
}
}
class Main{
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    b obj = new b();
    int s = sc.nextInt();
    long arr[] = new long[s];
    for(int i=0;i<s;i++){
        arr[i] = sc.nextLong();
    }
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(obj.greater(arr[i],arr[j])==1){
                long k = arr[j];
                arr[j] = arr[i];
                arr[i] = k;
            }
        }
    }
    for(int i=0;i<s;i++){
        System.out.println(arr[i]);
    }}
}