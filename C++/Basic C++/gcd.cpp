#include<iostream>
using namespace std;
//Solving gcd iteratively
//GCD stands for greatest common divisor

int gcd(int a, int b) {
 //If any one of the two numbers is 0 then the other number is gcd
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {
	//Substracting the bigger no. with the smaller one
        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }//returning a because a and b will be same after the loop 
    // a or b is gcd
    return a;
}

int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}