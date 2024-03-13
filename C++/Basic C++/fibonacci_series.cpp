#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    cout<<"Enter the range to print the fibonacci series"<<endl;
    int n;
    cin>>n;
    int sum=0;
  


    cout<<a<<""<<b<<"";
    for(int i=0;i<n;i++){
        sum=a+b;
        //changing the numbers to their next number
        a=b;
        b=sum;
        cout<<sum;
    }
    return 0;
}