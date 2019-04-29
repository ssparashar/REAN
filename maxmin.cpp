#include <iostream> 
using namespace std; 
  
int largestNum(int a, int b) 
{ 
    return a * (bool)(a / b) + b * (bool)(b / a); 
} 
  
int main() 
{ 
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << "Larger number is - > " << largestNum(a, b)<<endl;
    return 0; 
} 
