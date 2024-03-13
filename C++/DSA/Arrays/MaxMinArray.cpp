#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int min = INT32_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int getMax(int num[], int n){
    int max = INT32_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;


    int num[100];
    //taking input
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

//Prining the minimum and maximum values of array
    cout<<"Maximum value is "<<getMax(num,size)<<endl;
    cout<<"Minimum value is"<<getMin(num,size)<<endl;


    return 0;
}