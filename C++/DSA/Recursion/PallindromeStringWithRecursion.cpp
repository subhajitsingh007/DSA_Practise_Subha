#include<iostream>
using namespace std;

bool checkPallindrome(string str, int i, int j ){
    //base case
    if(i>j){
        return true;
    }

    if(str[i]!=str[j])
    return false;


    //recursive function
    else{
        return checkPallindrome(str,i+1,j-1);
    }
}

int main(){
    string name="abbbba";
    bool isPallindrome=checkPallindrome(name,0,name.length()-1);
    if(isPallindrome){
        cout<<"The string is Pallindrome"<<endl;

    }
    else{
        cout<<"The string is not Pallindrome"<<endl;
    }
    return 0;
}