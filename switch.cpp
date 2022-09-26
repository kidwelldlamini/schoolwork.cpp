#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Enter all 5 marks: ";
    cin>>a>>b>>c>>d>>e;
    int tot = a+b+c+d+e;
    int avg = tot/5;

    switch(avg){
        case 1:
         {
            if(avg >= 90){
                cout<< "Grade A" <<endl;
            }
            break;
         }
         case 2:
         {
            if(avg >=80){
                cout<<"Grade B"<<endl;
            }
            break;
         }
         case 3:
         {
            if(avg >=70){
                cout<<"Grade C"<<endl;
            }
            break;
         }
         case 4:
         {
            if(avg >=60){
                cout<<"Grade D"<<endl;
            }
            break;
         }
         case 5:
         {
            if(avg >=50){
                cout<<"Grade E"<endl;
            }
            break;
         }
         default:
         {
            if(avg < 50){
                cout<<"Can not award grade!!"<<endl;
            }
            break;
         }
    }
    return 0;
}


