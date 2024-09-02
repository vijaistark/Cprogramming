#include <stdio.h>
int main() {
    int arr[20];
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(arr[i] == arr[j]){
            arr[i] = arr[i] * arr[i];
            arr[j] = arr[j] * arr[j];
        }
    }
    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
}
}