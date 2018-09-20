/**
Author: Victor Nguyen, Collin Sipple, Joe Wyrick
Date: 09/20/2018
 * This program computes utility program
 *
 */

 #include<stdlib.h>
 #include<stdio.h>
 #include<math.h>
 #include"utils.h"
 #define E 1
 int main(int argc, char **argv) {

   double originLatitude = 0;//(argv[1]);
   double originLongitude = 0;//atof(argv[2]);
  double destinationLatitude = 1;//atof(argv[3]);
  double destinationLongitude = 1;//atof(argv[4]);
//   double t = atof(argv[5]);
//   double percentC = atof(argv[6]);
//   if ( originLatitude < -90 || originLatitude > 90 ){
//     printf("INCORRECT origin latitude points\n" );
//   }
//     else if (originLongitude < - 180 || originLongitude > 180) {
//       printf("INCORRECT origin longitude points\n" );
//     }
//     else if (destinationLatitude < - 90 || destinationLatitude > 90) {
//       printf("INCORRECT destination latitude points\n" );
//     }
//     else if (destinationLongitude < - 180 || destinationLongitude > 180) {
//       printf("INCORRECT destination longitude points\n" );
//     }
//
// double distance = getAirDistance (originLatitude,
//                  originLongitude,
//                  destinationLatitude,
//                 destinationLongitude);
//
// printf("Your air distance is: %lf KM \n", distance);
//
// double Answer = lorentzTimeDilation (t, percentC);
// printf("Your time dilation is: %lf \n", Answer
double actual = 157.30;
double airDist = getAirDistance( originLatitude,
                       originLongitude,
                       destinationLatitude,
                       destinationLongitude);
airDist = round(airDist*1000)/100;
printf("Your air distance is: %lf\n", airDist);
if (fabs(airDist - actual) <= E) {
  printf("Passed\n");

}
else {printf("Failed!\n");}
return 0;
}
