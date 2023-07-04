#include <stdio.h>

#define SPEED_OF_SOUND 343.2
#define INVALID_DISTANCE -1.0
#define INVALID_INPUT -1.0

double calculate_distance(double time_elapsed) {
    if (time_elapsed < 0) {
        printf("Invalid input: time elapsed cannot be negative.\n");
        return INVALID_DISTANCE;
    }

    return SPEED_OF_SOUND * time_elapsed;
}

double get_time_elapsed() {
    double time_elapsed;
    printf("Enter the time elapsed (in seconds) between seeing the lightning and hearing the thunder: ");

    if (scanf("%lf", &time_elapsed) != 1) {
        printf("Error reading input. Please enter a valid floating-point number.\n");
        return INVALID_INPUT;
    }

    return time_elapsed;
}

void print_distance(double distance) {
    if (distance >= 0) {
        printf("The thunderstorm is approximately %.2f meters away.\n", distance);
    }
}

int main() {
    double time_elapsed = get_time_elapsed();

    double distance = calculate_distance(time_elapsed);
    print_distance(distance);

    return 0;
}
