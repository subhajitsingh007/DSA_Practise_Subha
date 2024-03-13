#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else if(arr[mid<key]){
        s=mid+1;
    }
    mid=s+(e-s)/2;
  }
    return ans;
}
int lastOcc(int arr[], int n, int key){
     int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else if(arr[mid<key]){
        s=mid+1;
    }
    mid=s+(e-s)/2;
  }
    return ans;
}
int main(){
    int odd[5]={1,2,3,3,5};
    cout<<"First occurence of 3 is at index "<<firstOcc(odd, 5, 3)<<endl;
    cout<<"Last occurence of 3 is at index"<<lastOcc(odd, 5, 3)<<endl;
    return 0;
}