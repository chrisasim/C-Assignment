#include<iostream>

using namespace std;


int main()
{
 int x; 
 cout << "Type your age: "; // Type a number and press enter
 cin >> x; // Get user input from the keyboard
 cout << "Your age is: " << x; // Display the input value 
 if (x>18)
 {
   cout<<"You qualified to vote";
 }else{
   cout<<"You are not qualified to vote";
 }

 return 0;
}
