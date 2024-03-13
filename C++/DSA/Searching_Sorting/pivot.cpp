#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){

    
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
     mid=s+(e-s)/2;
    }
    // we can return both e and s as both are same in the end

    return s;

}
//Pivot element is the smallest element in an array
int main(){
    int arr[5]={3, 8, 10, 17, 1};
    cout<<"Pivot is "<<getPivot(arr, 5 )<<endl;
    return 0;
}