#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){//base case
        return 1;
    }
    return n*fact(n-1);
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
}