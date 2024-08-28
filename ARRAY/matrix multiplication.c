#include <stdio.h>

int main() {
    int a[20][20],b[20][20],mul [20][20];
    int r,i,j,k,c;
    
    scanf("%d %d",&r ,&c);
    
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
        for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
            for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
        mul[i][j] = 0;
        
                for(int k =0;k<c;k++){
                    mul[i][j] += a[i][j] * b[k][j]  ;
            
        }
        printf("%d ", mul[i][j]);
    }
    
    printf("\n");
}

}