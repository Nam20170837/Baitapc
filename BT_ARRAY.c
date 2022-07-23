#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int MaxArray(int n,int a[n]){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int MinArray(int n,int a[n]){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
void SortAscend(int n,int a[n]){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void SortDescend(int n ,int a[n]){
for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void InputArray(int n,int a[n]){
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void OutputArray(int n,int a[n]){
    printf("Output:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
        
    }
}
int main(int argc, char const *argv[])
{   int a[100];
   InputArray(10,a);
   OutputArray(10,a);
    printf("\nMAX %d",MaxArray(10,a));
    printf("\nMIX %d",MinArray(10,a));
    printf("\nSAP SEP TANG DAN");
    SortAscend(10,a);
    OutputArray(10,a);
    printf("\nSAP SEP GIAM DAN");
    SortDescend(10,a);
    OutputArray(10,a);

}
