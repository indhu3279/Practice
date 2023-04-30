Pricipal Numbers
A proper factor of a number is a factor of the number other than itself. 
Given a collection of numbers, a number n1 in position ‘i’ is said to be principal number 
if the largest proper factor of all numbers in position > i is lesser than or equal to the largest proper factor
 of n1. The last number in the collection is a principal number. For example, given five numbers 
29, 15, 5, 9 and 11, the output should be 15, 9 and 11.

Input Format

First line contains the number of elements, n

Next ‘n’ lines contain the elements in the collection

Output Format

Print the principal numbers one on each line

//JAVA CODE
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int g = 0;
        int arr[] = new int[n];
        int a[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
            for(int j=arr[i]-1;j>=1;j--){
                if(arr[i]%j==0){
                    a[g] = j;
                    g++;
                    break;
                }
            }
        }
        int c=0;
        for(int i=0;i<g;i++){
            for(int j=i+1;j<g;j++){
                if(a[i]>=a[j]){
                    c++;
                }
            }
            if(c==g-i-1){
                System.out.println(arr[i]);
            }
            c=0;
        }
    }
}