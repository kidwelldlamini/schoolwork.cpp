//Guessing game

// #include <iostream> 
// using namespace std; 
// int main (void) 
// {     
//     int searched = 5;  //The value we're searching
//     int given = -1; // The variable to which we'll write user's guesses

//     //Greet the user:
//     cout << "This is simple guessing game:" << endl;
//     cout << "Please enter a number:" << endl;

//     //This while-loop will terminate when the user entered the searched value
//     while (searched != given) {
//         cin >> given;  // Read a value from the keyboard

//         /*
//         Note, that the following line(s) within the loop-brackets
//         will also execute if the user guessed correctly.
//         Checking will be done at the start of the next iteration
//         */

//         cout << "Thank you for your guess..." << endl;  
//     }
// cout << "You found the correct number. Good bye." << endl;
// return 0;
// }

// Some while with continue- and break-statements
/*
#include <iostream> 
using namespace std; 
int main (void) 
{     
    int count = 200;  // The start value
    int destination = 0;  // the destination

    // This while will normally terminate when count reaches the destination-value
    while (count > destination) {  
        count--;  // decrement count

        if (count == 190) { // If count will turn into 190...
            cout << "skipped..." << endl;
            continue; //... the while-loop will skip to the next iteration due to the "continue"-statement.
        }

        if (count < 180) { // If count falls below 180...
            cout << "aborted..." << endl;
            break; //... the while-loop will be aborted due to the "abort"-statement.
        }
        cout << count << endl;  //Note, that this will also execute when target is reached
    }

return 0;
}
*/
#include <iostream> 
using namespace std; 
int main (void) 
{     
        int end = 20;  //The target value
        int start = 0;  // Counter
        
        while(start!=end)  
        {
             start++;
            cout<<start<<endl;
           
        }  

return 0;
}