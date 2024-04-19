# include<iostream>
#include <cstdlib>  
#include <ctime>  
using namespace std;
int main()  
{  
    srand(time(0));  
    int num = (rand() % 50);
    cout<<"guess a number less than 50\n";
   
    for(int i=0;i<50;i++) {
        int num1;
        cin>>num1;
        if (num1 == num){
            cout<< "\n guess is correct";
            break;
        }
        else if (num1>num){
            cout<<"guess a smaller number than"<< num1<<"\n";
        }
        else if(num1<num){
            cout<<"guess a number greater than"<<num1<<"\n";
        }
        else {
            cout<<"invalid number";
        }
    }
    return 0;  
}  
