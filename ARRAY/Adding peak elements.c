#include <stdio.h>

int main() {
    int arr[20];
    int n;
    int sum =0;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i =0;i<n;i++){
        if(arr[i] > arr[i+1] && arr[i] >arr[i-1]){
            sum = arr[i] + arr[i+1] + arr[i-1];
            arr[i] = sum;
        }
    }
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
}