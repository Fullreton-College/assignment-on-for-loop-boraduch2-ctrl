#include <iostream>
using namespace std;

int main() 

{
   int sales;
   int stars;

   cout << "Sales Bar Chart\n";
   cout << "(Each * = 100)\n\n";

   // Looping for 5 stores
   for (int store =1; store <= 5; store++)
   {
      cout << "Enter today's sales for store " << store << ": ";
      cin >> sales;

      stars = sales / 100;

      cout << "Store " << store << ": ";

      for (int i = 0; i < stars; i++)
      {
         cout << "*";
      }
      
      
      cout << endl; 
   }

   return 0;
}
