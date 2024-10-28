#include<stdio.h>
#include<stdlib.h>
void selectionSort(int a[],int n) {
    int i,j,pos,temp;
    for ( i = 0; i < n-1; i++)
    {
        pos = i;
        for ( j = i+1; j < n; j++)
        {
            if(a[j]<a[pos]) { pos = j; }
        }
        if (i != pos)
        {
            temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
        
    }
    
}
int main() {
    int *a,n,i;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the elements: \n");
    a = (int*)malloc(n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
        scanf("%d",a+i);
    }
    selectionSort(a,n);
    printf("After Sort: \n");
    for(i=0;i<n;i++) {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}