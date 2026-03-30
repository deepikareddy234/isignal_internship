/*merge two arrays into a new single array*/
#include<stdio.h>
void merge(int *a,int n1,int *b,int n2,int *c){
    int i;
    for(i=0;i<n1;i++){
        *(c+i)=*(a+i);
    }
    for(i=0;i<n2;i++){
        *(c+n1+i)=*(b+i);
    }
}

int main(){
    int a[50],b[50],c[100];
    int n1,n2,i;
    printf("Enter size of first array:");
    scanf("%d",&n1);
    printf("Enter elements of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);
    printf("Enter elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    merge(a,n1,b,n2,c);
    printf("Merged array:");
    for(i=0;i<n1+n2;i++){
        printf("%d ",c[i]);
    }
    return 0;
}

