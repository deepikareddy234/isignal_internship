/* insert an element into an existing array at a particular position*/
#include<stdio.h>

void insert(int *a,int n,int pos,int val){
    int i;
    for(i=n;i>=pos;i--){
        *(a+i)=*(a+i-1);
    }
    *(a+pos-1)=val;
}

int main(){
    int a[50],n,i,pos,val;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter value:");
    scanf("%d",&val);
    insert(a,n,pos,val);
    printf("Array after insertion:");
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

