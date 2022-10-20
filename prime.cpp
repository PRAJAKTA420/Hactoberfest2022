#include <iostream>

using namespace std;

int main()

{

    int num;
    int count;
    count=0;
    cout<<" enter a number to check it is prime or not";
    cin>>num;
    
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count=count+1;
        }
        
    }
    if(count=0)
        {
            cout<<" Given no is a prime number"<<endl;
        }
        else
        {
             cout<<" Given no is not a prime number"<<endl;
        }
    


    return 0;
}
