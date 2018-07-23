#include <iostream>
#include <iomanip>
using namespace std;
//Nick Riley

float findAverage(float arr[], int size);
float findTotal(float arr[], int size);
int main()

{
   float  *monthSales;
   float  total = 0;  
   float  average;            
   int    numOfSales;       
   int    count;           

   cout << "How many monthly sales will be processed? ";
   cin >> numOfSales;

       monthSales = new float[numOfSales];


   cout << "Enter the sales below"<< endl;

   for ( count = 0; count < numOfSales;  count++)
    {
       cout << "Sales for Month number  " 
            << count + 1
            << ":";
           
       cin >> *(monthSales + count);
       
    }
	
	average = findAverage(monthSales, numOfSales);
	total = findTotal(monthSales,numOfSales);
   cout << "Average Monthly sale  is $" << average << endl;
   cout << "Total Monthly sale is $" << total << endl;
   delete []monthSales;

   return 0;
}

float findAverage(float arr[], int size){
  	float average;
  	float total;
    for (int count = 0; count < size; count++)
    {
       total = total + arr[count];
    }

  return average = total / size;
 }
  
 float findTotal(float arr[], int size){
 	float total;
 	for (int count = 0; count < size; count++)
    {
       total = total + arr[count];
    }
    
    return total;
   }
 	

