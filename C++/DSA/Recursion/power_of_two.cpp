#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    return 2*power(n-1);

    /*int smallerProblem=power(n-1);
    int biggerProblem=2*smallerProblem;
    return biggerProblem; this is an unoptimized approach used for learning only*/
}
int main(){
    int n;
    cout<<"Enter the power of two";
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}