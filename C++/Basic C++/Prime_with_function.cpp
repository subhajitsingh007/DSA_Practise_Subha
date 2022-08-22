#include<iostream>
using namespace std;

//1 is equal to prime number
//0 is equal to not prime number


bool isPrime(int n){
   for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
   }
   return 1;
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    //The next line means if the isPrime function is true then only the code inside if statement will work.
    if(isPrime(n)){
        cout<<"The number is prime"<<endl;
    }

    else{
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}