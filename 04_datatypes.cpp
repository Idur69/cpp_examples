#include <iostream>
using namespace std;

int glo = 4;
void sum() {
   int a;
   cout << "sum is : "<< glo << "\n";
}
int main() {
   // global delcaration 
   int glo  = 9;
   glo = 10;
   sum();
   cout << "main glo " << glo << "\n";
   int id = 69, a = 20, b = 25;
   float pi = 3.14;
   char str = 'l';
   //std::cout << " \n Well come to CPP from idur ...  " << id << std::endl;
   bool is_true = false;
   cout << "A value is : "<< a << ".\n b value is  : "<<b << "\n";
   cout << "\n The pi values is  : " << pi;
   cout << "\n Char is : "<< str <<"\n";
   cout << "boolean : " << is_true <<"\n";
   return 0;
}
