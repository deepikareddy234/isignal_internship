/*Find the pair with a given sum in Array*/
#include<stdio.h>

void findPair(int *a,int n,int sum){
    int i,j,found=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(a+i)+*(a+j)==sum){
                printf("Pair found: %d %d\n",*(a+i),*(a+j));
                found=1;
            }
        }
    }
    if(found==0){
        printf("No pair found");
    }
}

int main(){
    int a[50],n,i,sum;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter required sum:");
    scanf("%d",&sum);
    findPair(a,n,sum);
    return 0;
}

