/*INPUT FORMAT :
5
2 -8 5 1 -6

OUTPUT FORMAT :
Sorted Array : 1 -8 2 5 -6*/


#include <stdio.h>
int main() {
    int n,f=0;
    scanf("%d",&n);
    int arr[n];
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            a[f] = i;
            b[f] = arr[i];
            f++;
        }
    }
    for(int i=0;i<f;i++){
        for(int j=i+1;j<f;j++){
            if(b[i]>b[j]){
                int t = b[j];
                b[j] = b[i];
                b[i] = t;
            }
        }
    }
    for(int i=0;i<f;i++){
        arr[a[i]] = b[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}