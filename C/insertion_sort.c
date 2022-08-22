#include <stdio.h>

int main() {
    // Write C code here
        int n;
       

    printf("Enter the size of the array");
    scanf("%d",&n);
     int arr[n],temp;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //printing the unsorted array
    printf("The unsorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    //sortung the array

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    printf("The sorted array is:");


    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    
    return 0;
}