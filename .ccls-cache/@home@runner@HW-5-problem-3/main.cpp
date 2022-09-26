#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int i = 10;          // measured temperature *C
  int j = 11;          // wind speed km/hr
  double K_1 = 13.12;  // conversion factor for *c
  double K_2 = 11.37;  // conversion factor for *c
  double K_3 = 0.3965; // conversion factor for *c
  double WCI;

  for (int i = 2; i <= 10; ++i) {

    //easiest way for me to skip 4 everytime was to combine and write out the true cases that should pass
    if (i != 2 && i != 6 && i != 10) {
      continue;
    }
    cout << "\n-------------------------------------------------" << endl;
    cout << "The temperature is: | " << i << " degress Celsius |";
    cout << "\n-------------------------------------------------" << endl;

    for (int j = 5; j <= 11; j++) {

      if (j != 5 && j != 7 && j != 9 && j != 11) {
        continue;
      }
      WCI = K_1 + (0.6125 * i) -
            (K_2 * (pow(j, 0.16)) + (K_3 * i * pow(j, (0.16))));
      cout << "\n >> The Wind speed is: " << j << " km/hr" << endl;
      cout << " >> The wind chill index for this data is: " << WCI << endl;
      cout << " \n                                        " << endl;
    }
  }

  /*Test calculations
        WCI = K_1 + (0.6125*T_a) - (K_2*(pow(W_s,0.16)) + (K_3*T_a*pow(W_s,
    (0.16)))); cout << WCI << endl;*/

  return 0;
}