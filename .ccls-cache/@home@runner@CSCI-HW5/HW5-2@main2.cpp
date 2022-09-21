#include <iostream>
#include <fstream>

using namespace std;

int main(){

  int dataTemp;
  int sumData = 0;
  int counter = 0;
// load input file
ifstream inFile; // declare stream variable
inFile.open("NumberData1.txt");

// load all data in while loop
while (inFile >> dataTemp)
  {
    //cout << dataTemp << endl;
    // check to see if data is valid
    if (dataTemp >= 0)
    {
      // update cumulative value of all data and number of data points loaded
      sumData = sumData + dataTemp;
      counter++;

    }
    else // the value is negative and we should exit
    {
      cout << "Negative value encountered of " << dataTemp << "." << endl;
      cout << "Will not use the rest of the data... " << endl;
      break;
    
    }
    
    
    
  }
    cout << "The sum of valid data is: " << sumData << endl;
    cout << "The number of valid data points is: " << counter << endl;
    cout << "The average of the valid data is : " << (static_cast<double>(sumData) / counter) << endl;

  
  
  }