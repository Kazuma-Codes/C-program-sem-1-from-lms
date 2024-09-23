/*The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, 
feet, inches and centimetres.*/
#include <stdio.h>

int main() {
    float distanceKm;
    float distanceMeters, distanceFeet, distanceInches, distanceCentimeters;

    // Input the distance in kilometers
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &distanceKm);

    // Convert the distance to other units
    distanceMeters = distanceKm * 1000;         // 1 kilometer = 1000 meters
    distanceFeet = distanceKm * 3280.84;        // 1 kilometer = 3280.84 feet
    distanceInches = distanceKm * 39370.1;      // 1 kilometer = 39370.1 inches
    distanceCentimeters = distanceKm * 100000;  // 1 kilometer = 100000 centimeters

    // Print the distances in different units
    printf("Distance in meters: %.2f m\n", distanceMeters);
    printf("Distance in feet: %.2f ft\n", distanceFeet);
    printf("Distance in inches: %.2f in\n", distanceInches);
    printf("Distance in centimeters: %.2f cm\n", distanceCentimeters);

    return 0;
}
