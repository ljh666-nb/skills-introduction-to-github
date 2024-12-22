#include <stdio.h>
void shellsort(int* a,int n){
    int index,i,j,temp;
    for(index=n/2;index>0;index/=2){
    for(i=index;i<n;i++){
        temp=a[i];
        for(j=i;j>=index&&a[j]<a[j-index];j-=index)
            a[j]=a[j-index];
            a[j]=temp;
    }
}
}
int main(void){
    int a[]={1,3,9,6,5,8,2,7,4};
    int n=sizeof(a)/sizeof(int);
    shellsort(a,n);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
