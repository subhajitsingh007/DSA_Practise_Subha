#include<iostream>
using namespace std;

int main(){


    //2nd question  what will be the output of the below code:
    /*int first=6;
    int *p=&first;
    int *q=p; // This just copy the value of p in q 
    (*q)++;
    cout<<first<<endl;*/
    //ans=7


    //3rd question
    /*int first=8;
    int *p=&first;
    cout<<(*p)++<<" ";// because it is post increment first the value will be printed after that it will get incremented
    cout<<first<<endl;*/
    // ans=8 9


    //4th question

    /*int *p=0;//it means p is a null pointer
    int first=110;
    *p=first;
    cout<<*p<<endl;*/
    // it will give segmentation fault the correct sytax is *p=&first;

    //5th question
    /*int first=8;
    int second=11;
    int *third=&second;
    first=*third;
    *third=*third+2;
    cout<<first<<" "<<second<<endl;*/
    //ans=11 13


    //6th question
    /*float f=12.5;
    float p=21.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;*/
    //ans=21.5 21.5 21.5


    //7th question
    /*int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;*/
    //ans should be 20 8 as ptr is of 8bytes

    //8th question
    /*int arr[]={11,21,13,14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;*/
    //ans= 11 21

    //9th question
    /*int arr[6]={11,12,31};
    cout<<arr<<" "<<&arr<<endl;*/
    // arr and &arr both will print the address of arr

    //10th question
    //int arr[6]={11,21,13};
    //cout<<(arr+1)<<endl;
    // it will print the address of arr[1]

    //11th question
     //int arr[6]={11,21,31};
     //int *p=arr;
     //cout<<p[2]<<endl;
     //ans=31 as p[2]=*(p+2)

     //12th question
    //int arr[]={11,12,13,14,15};
     //cout<<*(arr)<<" "<<*(arr+3);
     //ans=11 14

    //13th question
    //int arr[]={11,21,31,41};
    //int *ptr=arr++;
    //cout<<*ptr<<endl;
    //arr++ will generate error as we cannot increment an array. arr++ will try modify from the symbol table.

    //14th question
    /*char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr<<endl;*/
    //ans=b

    //15th question
    /*char arr[]="abcde";
    char *p=&arr[0];
    cout<<p<<endl;*/
    //ans=abcde
    //cout will function differently in case of character array.cout<<p will not print the address. It will print the whole character array.

    //16th question
    /*char arr[]="abcde";
    char *p=&arr[0];
    p++;
    cout<<p<<endl;*/
    //ans=bcde


    //17th question
    /*char str[]="subhajit";
    char *p=str;
    cout<<str[0]<<" "<<p[0]<<endl;*/
    //ans = s s

    //18th question
    /*void update(int *p){
        *p=(*p) *2;

    }
    int main(){
        int i=10;
        update(&i);
        cout<<i<<endl;
    }*/
    //ans=20

    //19th question
    /*int first=110;
    int *p=&first;
    int **q=&p;
    int second=(**q)++ +9;
    cout<<first<<" "<<second<<endl;*/
    //ans= 111 119
    //(**q)++ will increment the value of first to 111 and second will be 119

    //20th question
    /*int first=100;
    int *p=&first;
    int **q=&p;
    int second=++(**q);
    int *r=*q;
    ++(*r);
    cout<<first<<" "<<second<<endl;*/
    //ans = 102 101

    //21st question
   /*void increment(int**p){
        ++(**p);
    }
    int main(){
         int num =110;
        int *ptr=&num;
        increment(&ptr);
        cout<<num<<endl;
    }*/
    //ans=111
   




    return 0;
}
 