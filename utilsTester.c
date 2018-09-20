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

int casePassed = 0;
int numCase = 0;

double radians = degreesToRadians(45);
double radianActual = 0.785398;
printf("Your answer in radian is: %lf\n", radians);

numCase++;
if (fabs(radians - radianActual) <= E) {
  printf("Passed\n");
  casePassed++;
}
else{printf("Failed!!!!!\n");}

radians = degreesToRadians(180);
radianActual = M_PI;
printf("Your answer in radian is: %lf\n", radians);

numCase++;
if (fabs(radians - radianActual) <= E) {
  printf("Passed\n");
  casePassed++;
}
else{printf("Failed!!!!!\n");}

radians = degreesToRadians(90);
radianActual = M_PI/2;
printf("Your answer in radian is: %lf\n", radians);

numCase++;
if (fabs(radians - radianActual) <= E) {
  printf("Passed\n");
  casePassed++;
}
else{printf("Failed!!!!!\n");}



double actual = 157.30;
double airDist = getAirDistance( 0, 0, 1, 1);
printf("Your air distance is: %lf\n", airDist);

numCase++;
if (fabs(airDist - actual) <= E) {
  printf("Passed\n");
  casePassed++;

}
else {printf("Failed!\n");}

//Test 2
actual = 1545.24;
 airDist = getAirDistance( 10, 20, 20, 10);
printf("Your air distance is: %lf\n", airDist);
numCase++;
if (fabs(airDist - actual) <= E) {
  printf("Passed\n");
casePassed++;
}
else {printf("Failed!\n");}

//Test 3
 actual = 2621.35;
airDist = getAirDistance( 40, 60, 60, 40);
printf("Your air distance is: %lf\n", airDist);
numCase++;
if (fabs(airDist - actual) <= E) {
  printf("Passed\n");
casePassed++;
}
else {printf("Failed!\n");}

double actualTime = 5.773503;
double Tdiliation = lorentzTimeDilation(5,.5);
printf("Your time dilation is: %f\n", Tdiliation);

numCase++;
if (fabs(Tdiliation - actualTime) <= E) {
  printf("Passed\n");
  casePassed++;

}
else {printf("Failed!\n");}

actualTime = 83.3333;
Tdiliation = lorentzTimeDilation(50,.8);
printf("Your time dilation is: %f\n", Tdiliation);

numCase++;
if (fabs(Tdiliation - actualTime) <= E) {
  printf("Passed\n");
  casePassed++;

}
else {printf("Failed!\n");}

actualTime = 60.30227;
Tdiliation = lorentzTimeDilation(60,.1);
printf("Your time dilation is: %f\n", Tdiliation);

numCase++;
if (fabs(Tdiliation - actualTime) <= E) {
  printf("Passed\n");
  casePassed++;

}
else {printf("Failed!\n");}




return 0;
}
