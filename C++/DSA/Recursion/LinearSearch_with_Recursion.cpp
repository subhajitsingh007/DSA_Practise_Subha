#include<iostream>
using namespace std;
bool linearSearch(int *arr,int size,int k){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    bool remainingPart=linearSearch(arr+1,size-1,k);
    return remainingPart;
}
int main(){
    int arr[5]={5,7,9,11,163};
    int size=5;
    int key=163;
    
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Key is found"<<endl;
    }
    else
    cout<<"The key is not found"<<endl;

    return 0;
}