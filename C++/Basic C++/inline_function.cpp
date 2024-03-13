#include<iostream>
using namespace std;
//inline function will only work if there is only one statement in the function.
inline int getMax(int &a , int &b){
    //The if case is after question mark and the else case is after colon.
    return (a>b) ?a:b;
}
int main(){

    int a=5,b=2;
    int ans=0;
    ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+2;
    b=b+1;
    ans=getMax(a,b);
    cout<<ans<<endl;


    return 0;

}