#include<iostream>
using namespace std;
void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        //swap is predefined function in c++ to swap two variables.
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int even[10]={9,6,2,3,5,-7};
    int odd[10]={10,5,2,44,-8};

    reverse(even,6);
    reverse(odd,5);

    printArray(even,6);
    printArray(odd,5);


    return 0;
}