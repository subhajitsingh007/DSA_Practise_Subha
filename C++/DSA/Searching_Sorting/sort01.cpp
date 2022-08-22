#include<iostream>
using namespace std;
//2-pointer approach.
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
   int left=0; 
   int right=n-1;
   

   while(left<right){
    while(arr[left]==0){
        left++;
    }
    

    while(arr[right]==1){
        right--;
    }

    swap(arr[left],arr[right]);
    left++;
    right--;


   }
}
int main(){
    int even[8]={0,1,0,1,1,0,0,1};
    sortOne(even, 8);
    printArray(even, 8);


    return 0;
}