#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    //base case
    if(n==0)
    return;
    //processing
    int digit=n%10;
    n=n/10;
   
    //recursive call
    sayDigit(n,arr);

//cout is wirtten after recursive call to reverse the digits in the correct format
     cout<<arr[digit]<<" "<<endl;
    
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n ;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;


    return 0;
}