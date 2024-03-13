#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        //checking if the i+1 is in the array and then swapping the alternate elements.
        int temp=0;
        if(i+1<size){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}


    void printArray(int arr[], int n){
        for(int i=0;i<n;i++){
            cout<<" "<<arr[i];
        }cout<<endl;
    }


int main(){
    int even[6]={1,3,5,7,9,11};
    int odd[5]={11,33,55,77,99};

    swapAlternate(even, 6);
    printArray(even ,6);

    cout<<endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}