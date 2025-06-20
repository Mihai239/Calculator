#include <iostream>
using namespace std;
int main () {
int a,b,result;
cout<<"write first number: "<<endl;
cin>>a;
cout<<"write second number: "<<endl;
cin>>b;
char mathematical_operation;
cout<<"choose the operation: + - / *"<<endl;
cin>>mathematical_operation;
if(mathematical_operation=='+') {

 result=a+b;
cout<<"result is: "<<result;
}
else if (mathematical_operation=='-') {
 result=a-b;
 cout<<"result is: "<<result;}
 else if (mathematical_operation=='*') {
 result=a*b;
 cout<<"result is: "<<result;}
 else if (mathematical_operation=='/') {
 result=a/b;
 cout<<"result is: "<<result;}
 return 0;
}






