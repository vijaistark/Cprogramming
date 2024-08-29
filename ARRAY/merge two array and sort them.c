#include<stdio.h>
int main(){
    int arr[30];
    int arr2[30];
    int sum[60];
    int n;
    int n2;
    int temp =0;
    scanf("%d\n",&n);
        scanf("%d",&n2);

    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
        for(int i =0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    
            for(int i =0;i<n;i++){
                sum[i] = arr[i];
                
            }
               
            for(int i =0;i<n2;i++){
                sum[n+i] = arr2[i];
                
            }
            
            

        for(int i =0;i<n+n2;i++){
            for(int j =0;j<(n+n2)-i-1;j++){
                if(sum[j] > sum[j+1]){
                  temp = sum[j];
                  sum[j] = sum[j+1];
                  sum[j+1] = temp;
                }
            }
        }    
            
        for(int i =0;i<n+n2;i++){
                printf("%d ",sum[i]);
                
    
        }   
    
}