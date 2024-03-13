#include<iostream>
using namespace std;

void reverse(int i, int j , string &s){
    //base case
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    //recursive function
    return(reverse(i+1,j-1,s));


}

int main(){
    string name="Subhajit";
    reverse(0,name.length()-1,name);
    cout<<"The reversed string is "<<name<<endl;
    return 0;
}