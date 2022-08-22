#include<iostream>
using namespace std;
int binarySearch(int arr[], int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key)
        return mid;

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}



int main(){

    int even[6]={11,33,44,55,66,77};
    int odd[5]={4,6,10,12,99};

    int evenIndex=binarySearch(even, 6, 11);
    cout<<"Your element is found at index"<<evenIndex<<endl;

    int oddIndex=binarySearch(odd ,5 ,10);
    cout<<"Your element is found at index"<<oddIndex<<endl;

    return 0;
}