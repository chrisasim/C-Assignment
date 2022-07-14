#include<iostream>


using namespace std;


int main()
{
 int x; 
 cout << "Type a product id: "; // Type a number and press enter
 cin >> x; // Get user input from the keyboard
 cout << "Your product is  is: " << x; // Display the input value 
 if (x==1)
 {
  cout<<"The price is the following one:"<<50.55;
 }else if (x==2)
 {
   cout<<"The price is the following one:"<<12.35;
 }else if (x==5)
 {
   cout<<"The price is the following one:"<<11.46;
 }else if (x==7)
 {
  cout<<"The price is the following one:"<<11.46;
 }else if (x==9)
 {
  cout<<"The price is the following one:"<< 12.35;
 }else if (x==11)
 {
  cout<<"The price is the following one:"<< 11.46;
 }else
 {
   cout<<"Wrong value, Product id not found";
 }
 return 0;
}
