#include<iostream>
using namespace std;
// The selection sort sorts the array from first to last
void selectionSort(int *arr, int n, int i=0){
    //base case
    if(i==n-1){
        return ;
    }

    int minindex=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }

    }
    swap(arr[i],arr[minindex]);

    //Recursive call
    selectionSort(arr,n,i+1);
}

int main(){
     int arr[5]={11,5,22,6,1};
    selectionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}