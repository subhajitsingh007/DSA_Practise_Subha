#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0||n==1){//base case
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int range;
    cout<<"Enter the range"<<endl;
    cin>>range;
    cout<<fibonacci(range)<<endl;

}