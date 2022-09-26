#include <iostream>

using namespace std;

int main() {
    int n = 1;
    void *p1;
    int *p2;
    
    p2 = (int*)p1; // typecasting *p2
    p2 = &n; // pointer pointing to the address of a;
    *p2 = 2; // modifying the value stored at the address where p1 is pointing thus changing the value of n

    cout <<"The value of n is: "<< n << endl; 
  
    return 0;
}