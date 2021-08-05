#include<iostream>
#include<ctime> // used to work with date and time
using namespace std;
int main() {
   time_t t; // t passed as argument in function time()
   struct tm * tt; // declaring variable for localtime()
   time (&t); //passing argument to time()
   tt = localtime(&t);
   cout << "Current Day, Date and Time is = " << asctime(tt);
   return 0;
}