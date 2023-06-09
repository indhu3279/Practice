Stock Market
Note: Students using C, C++ or Java to solve the problem have to use long int for the variables instead of int. The results are different and using long int gives the correct answer. The problem description is also modifed to add more clarity of what has to be done to handle overflow. Please try again with these suggestions so that your code may pass now

In the stock market of the city Knowhere, the stock prices of a given day is calculated as 3 times the price of previous day plus 4 times the price of the day before yesterday.
Given the prices on day 1 and day 2, answer Q queries asking you about the price of the stock on the Nth day.

Input Format:
The first line of the input contains two space-separated integers A and B, denoting the initial price of 
stock on day 1 and day 2
The next line of the input contains an integer Q denoting the number of queries.
The next line contains Q space-separated integers each denoting the number of the day for which the stock price
 is asked.

Output Format:
Print one line containing Q space-separated integer, ith of them denoting the value of the stock price on ith day.
 Since there is a possibility of overflow of values while calculating price on ith day (i.e.) values may become 
larger than the value contained in 32 bit integer, so take modulo (10^9+7) wherever required.

Constraints:
1 <= A,B <= 10^5
1 <= Qi <= 10^3

Example:
Input:
1 2
3
1 2 3

Output:
1 2 10


//C CODE
#include <stdio.h>
int main(){
    int d1,d2;
    int q;
    //long int n;
    scanf("%d %d",&d1,&d2);
    scanf("%d",&q);
    int arr[q];
    for(int i=0;i<q;i++){
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
        if(arr[i]==1){
            printf("%d ",d1);
        }
        else if(arr[i]==2){
            printf("%d ",d2);
        }
        else if(arr[i]>2){
                long int temp1 = d1;
                long int temp2 = d2;
            for(int j=0;j<arr[i]-2;j++){
                long int t = temp2;
                temp2 = ((4*temp1)+(3*temp2))%(1000000007);
                temp1 = t;
            }
            printf("%ld ",temp2);
        }
    }
}   
