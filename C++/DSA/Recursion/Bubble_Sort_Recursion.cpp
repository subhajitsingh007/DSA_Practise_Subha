#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    // base case
    // if there is only 1 or 0 elements in the array the array is already sorted
    if(n==0 || n==1)
    return;

    //largest element will be sorted in the end

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //Recursive call
    sortArray(arr,n-1);

}

int main(){
    int arr[5]={11,5,22,6,1};
    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}