// #include<iostream>
// using namespace std;
// int squareNumbers(int x){ // Declares function "squareNumbers" that takes in parameter of x.
//     int y=x*x; //creates int variable equating to x squared
//      cout<<y<<endl;
//      return y;
//       //returns the value of y when the function is called
// }

// int main(){ 
//     int input = 9;
//     int output = squareNumbers(input); 
//     //the function is called, resulting in the int variable "output" equating input squared
//     //return 0;
// }
#include <iostream>
using namespace std;

int printSum(int a,int b, int c){
	int sum = a+b+c;
    cout<<sum<<endl;
    return sum;
}
// your code goes here (declare function)

int main (){
    int a = 1;
    int b = 4;
    int c = 3;
    
    int output = printSum(a,b,c);
    // your code goes here (call the function)
}