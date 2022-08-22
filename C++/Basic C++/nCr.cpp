#include<iostream>
using namespace std;
//n!=n×(n−1)!
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;

}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator= factorial(r) * factorial(n-r);
    return numerator/denominator;
}



int main(){
    int n,r;
    cin>>n>>r;

    cout<<"Your answer is "<<nCr(n,r)<<endl;
    
    return 0;
}