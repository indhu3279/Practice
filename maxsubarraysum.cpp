// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
using namespace std;
// int max(int a,int b){
//     return max(a,b);
// }
int max(int a,int b,int c){
    return max(max(a,b),c);
}
int CrossingSA(int l,int m,int h,int arr[]){
    int lsum = 0;
    int leftsum = INT_MIN;
    for(int i=m;i>=l;i--){
        lsum = lsum + arr[i];
        if(lsum>leftsum){
            leftsum = lsum;
        }
    }
    int rsum = 0;
    int rightsum = INT_MIN;
    for(int i=m;i<=h;i++){
        rsum = rsum + arr[i];
        if(rsum>rightsum){
            rightsum = rsum;
        }
    }
    return(max(leftsum+rightsum-arr[m],leftsum,rightsum));
}
int maxsubarray(int arr[],int l,int h){
    if(l>h){
        return INT_MIN;
    }
    else if(l==h){
        return(arr[l]);
    }
    int m = (l+h)/2;
    return(max(maxsubarray(arr,l,m-1),maxsubarray(arr,m+1,h),CrossingSA(l,m,h,arr)));
}
int main() {
    int a[] = {1,2,-3,4,5,-6};
    printf("%d",maxsubarray(a,0,5));
    

    return 0;
}