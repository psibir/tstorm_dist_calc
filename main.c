#include <stdio.h>

int main() {
    double timeElapsed;
    double speedOfSound = 343.2; // Speed of sound in meters per second

    printf("Enter the time elapsed (in seconds) between seeing the lightning and hearing the thunder: ");
    scanf("%lf", &timeElapsed);

    // Calculate the distance using the formula: distance = speed * time
    double distance = speedOfSound * timeElapsed;

    printf("The thunderstorm is approximately %.2f meters away.\n", distance);

    return 0;
}
