#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

  double k1 = 13.12;   // conversion factor 1
  double k2 = 11.37;   // conversion factor 2
  double k3 = 0.3965;  // conversion factor 3

    double Ta;         // measured temperature in Celsius
    double Ws;         // wind speed in Km/hr
    double WCI;        // Wind chill index in Celsius

    for (int Ws = 5; Ws <= 11; Ws += 2){
      Ta = 2;
    
      WCI = k1 + (0.6125*Ta) - (k2*pow(Ws, 0.16)) + (k3*Ta*pow(Ws, 0.16));

      cout << "When Ta = " << Ta << " and Ws = " << Ws << ", WCI = " << WCI << endl;
      
      }
     for (int Ws = 5; Ws <= 11; Ws += 2){
      Ta = 6;
    
      WCI = k1 + (0.6125*Ta) - (k2*pow(Ws, 0.16)) + (k3*Ta*pow(Ws, 0.16));


      cout << "When Ta = " << Ta << " and Ws = " << Ws << ", WCI = " << WCI << endl;
     
      
      }
     for (int Ws = 5; Ws <= 11; Ws += 2){
      Ta = 10;
    
      WCI = k1 + (0.6125*Ta) - (k2*pow(Ws, 0.16)) + (k3*Ta*pow(Ws, 0.16));

       cout << "When Ta = " << Ta << " and Ws = " << Ws << ", WCI = " << WCI << endl;
      
      }
    
  }
  
