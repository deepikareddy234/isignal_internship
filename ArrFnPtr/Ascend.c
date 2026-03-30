/*Sort an Array in Ascending Order*/
#include<stdio.h>

void sort(int *a,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(*(a+j) > *(a+j+1)){
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}

int main(){
    int a[50],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

