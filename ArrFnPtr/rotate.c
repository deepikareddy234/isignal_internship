/*rotate n number of positions in an array as output return an Array from a Function*/
#include<stdio.h>
#include<stdlib.h>

int *rotate(int *a,int n,int k){
    int i,j,temp;
    int *l=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        l[i]=a[i]; 
    for(i=0;i<k;i++){
        temp = l[0];
        for(j=0;j<n-1;j++){
            l[j] = l[j+1];
        }
        l[n-1] = temp;
    }
    return l;
}

int main(){
    int a[50],n,k,i;
    int *res;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of rotations:");
    scanf("%d",&k);
    res = rotate(a,n,k);
    printf("Rotated array:");
    for(i=0;i<n;i++){
        printf("%d ",res[i]);
    }
    free(res);
    res=NULL;
    return 0;
}

