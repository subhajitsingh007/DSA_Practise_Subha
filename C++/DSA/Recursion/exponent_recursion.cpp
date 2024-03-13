#include<iostream>
using namespace std;

int power(int a, int b){
    //base case 
    // if the power is 0 return 1

    if(b==0)
    return 1;

    // if the power of 2 is 1 then the answer will be 2 itself
    if(b==1)
    return a;

    //Recursive call
    int ans=power(a,b/2);

    //if b is even
    if(b%2==0)
    return ans*ans;

//if b is odd
    else{
        return a*ans*ans;
    }


}

int main(){

    int a,b;
    cin>>a>>b;

    int ans=power(a,b);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}