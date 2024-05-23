 #include <iostream>
 using namespace std;
 int main()
 {
   int num, counter, table;
   cout <<"Which number would you like to see the multiplication table? ";
   cin >>num;
   for (counter=1;counter<=10;counter++)
   {
   	   table = num * counter;
     cout <<num<<" x "<<counter<<" = "<<table<<"\n";  	
   }
     
 }