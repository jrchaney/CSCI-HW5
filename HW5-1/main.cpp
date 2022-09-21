/******************************************************************************************
  Programmer: Jackson Chaney
  Description: Test loading a *.dat file. Follows the handout
  EOF_While_FileImport.pdf
  *************************************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  int cumulative_cases = 0;

  // declare stream variables
  ifstream inFile;  // needed to access the file we want to load
  ofstream outFile; // needed to save the results of the analysis

  // open the input file
  inFile.open("TestResultsData.dat");

  // open the output file
  outFile.open("AnalyzedData.txt");

  // read in the date
  inFile >> date;
  cout << date << endl;
  // add date to the output file as the first line
  outFile << date << endl;

  // read in the 2 pieces lf info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  while (inFile) {
    // update number of cases & persons tested
    cumulative_cases = cumulative_cases + TestResult;
    count++;

    // read in the next line
    inFile >> firstName;
    inFile >> TestResult;
  }
  outFile << "Total Number Cases = " << cumulative_cases << ' ' << endl;
  outFile << "Number of persons tested = " << count << ' ' << endl;

  // repor prevalence as % with 2 decimals
  outFile << fixed << showpoint << setprecision(2);
  outFile << "The prevalence is ";
  outFile << ((static_cast<double>(cumulative_cases)) / count) * 100;

  inFile.close();

  outFile.close();
}