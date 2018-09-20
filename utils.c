/**
Author: Victor Nguyen, Collin Sipple, Joe Wyrick
Date: 09/20/2018
 * This program computes the force of an object
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"utils.h"


double degreesToRadians (double degree) {
double radian = (degree * M_PI) / 180;
return radian;
}


double getAirDistance (double originLatitude,
                      double originLongitude,
                      double destinationLatitude,
                      double destinationLongitude) {

originLatitude = degreesToRadians ( originLatitude);
originLongitude = degreesToRadians ( originLongitude);
destinationLatitude = degreesToRadians ( destinationLatitude);
destinationLongitude = degreesToRadians ( destinationLongitude);

double distance = acos((sin(originLatitude) * sin(destinationLatitude)) + (cos(originLatitude) * cos(destinationLatitude) * cos(destinationLongitude - originLongitude))) * 6371;
return distance; }

double lorentzTimeDilation (double t, double percentC){

 double dilation = ( t / (sqrt(1 - pow(percentC,2))));
       return dilation;
     }
