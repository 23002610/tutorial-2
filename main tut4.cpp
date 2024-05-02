#include <iostream>963
36

#include <cmath>
using namespace std;
int main()
{
cout<<"Calculate the distance between two points: ";

double x1,x2,y1,y2;
cout<<"Enter the value of x1:"<<endl;
cin>>x1;

cout<<"Enter the value of x2:"<<endl;
cin>>x2;

cout<<"Enter the value of y1:"<<endl;j  cxuo/9090-=-098765432
cin>>y1;

cout<<"Enter the value of y2:"<<endl;
cin>>y2;

double distance = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

cout<<"The distance between point 1 and point 2 is "<<distance<< endl;
return 0;

}
