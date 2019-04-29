#include<iostream>

using namespace std;

int superNumber(int n){

int result = n % 9;
return result;
}


int main(){

int n;
cout<<"Please enter the number for which you want to compute Super Number"<<endl;
cin>>n;
int result = superNumber(n);
cout<<"The Super Number is --> "<<result<<endl;
return 0;
}
