#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){

  double C;  // the cost of seed to sow one square metre of lawn
  double L;  // number of lawns
  double wi; // width of lawn
  double wl; // length of lawn
  double count = 0;
  cin >> C;
  cin >> L;

  for (int i = 0; i < L; i++){

    cin >> wi >> wl;
    double area = wi * wl;
    double cost = C * area;
    

    count = count + cost;
    
  }
  cout.precision(10);
  cout << fixed << count << endl;
  
  
}