#include<iostream>

using namespace std;

int main()
{
    int n=5;
    int esum=0;
    int osum=0;
    for (int i = 1; i <=6; i++)
    {
        
        if (i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum=osum+i;
        }
        
    }
    cout<<"even sum is "<<esum<<endl<<"odd sum is "<<osum;
}