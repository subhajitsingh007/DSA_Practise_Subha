#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i])
        return 1;
    }
    return 0;
}


int main(){
    int arr[10]{10,-2,4,8,9,15,45,-98,100,22};
    int key;
    cout<<"Enter the element to search for"<<endl;
    cin>>key;

    bool found=search(arr, 10, key);

    if(found){
        cout<<"The element is present"<<endl;

    }
    else{
        cout<<"The element is not present"<<endl;
    }
    return 0;
}