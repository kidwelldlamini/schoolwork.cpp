#include <iostream>
using namespace std;

int main()
{
    int age[] = {16,48,72,66,23};
   
    
    for(int i = 0; i < 5; i++)
    {   
         cin>>age[i];     
        if(age[i]<20){
            cout<<"child"<<endl;
        }
        else if(age[i]>=20 && age[i]<60){
            cout<<"adult"<<endl;
        }else{
            cout<<"retired"<<endl;
        }
        // your code goes here. 
        // use a if else block to classify the person as Child / Adult / Retired
    }
    return 0;
}