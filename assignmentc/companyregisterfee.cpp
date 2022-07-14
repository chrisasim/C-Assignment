#include<iostream>

using namespace std;


int main()
{
 int x;
 int totalAmount;
 cout << "Type the total number of the people registered: "; // Type a number and press enter
 cin >> x; // Get user input from the keyboard
 cout << "Your total number registered is: " << x; // Display the input value 
 if (x>=1 && x<=4)
 {
   totalAmount = x*500;
 }else if (x>=5 && x<=10)
 {
   totalAmount = x*400;
 }else if (x>=11)
 {
   totalAmount = x*300;
 }
 else
 {
   cout<<"Wrong value input";
 }
 cout<<"The total amount fee of the registered company is: "<<totalAmount<<endl;


 return 0;
}
