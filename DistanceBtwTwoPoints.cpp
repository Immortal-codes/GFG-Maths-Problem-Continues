#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    x1=0, y1=0, x2=2, y2=-2;

    int distance =round(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
    cout<<distance;
}