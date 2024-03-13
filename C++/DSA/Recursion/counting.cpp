#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive relation
    //if we substitute the processing part with recursive relation part then it becomes from head recursion to tail recursion.
    print(n-1);

    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
}