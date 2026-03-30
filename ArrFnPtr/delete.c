/*delete an element into an existing array at a particular position*/
#include<stdio.h>

void delete(int *a,int n,int pos){
    int i;
    for(i=pos-1;i<n-1;i++){
        *(a+i)=*(a+i+1);
    }
}

int main(){
    int a[50],n,i,pos;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position to delete:");
    scanf("%d",&pos);
    delete(a,n,pos);
    printf("Array after deletion:");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

