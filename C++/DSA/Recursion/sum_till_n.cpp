#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<sum(n)<<endl;


}