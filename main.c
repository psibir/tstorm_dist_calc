#include <stdio.h>

#define SPEED_OF_SOUND 343.2
#define SUCCESS 0
#define ERROR_INVALID_INPUT -1
#define ERROR_NEGATIVE_TIME -2

int validate_time_elapsed(double time_elapsed) {
    if (time_elapsed < 0) {
        printf("Invalid input: time elapsed cannot be negative.\n");
        return ERROR_NEGATIVE_TIME;
    }

    return SUCCESS;
}

double get_time_elapsed() {
    double time_elapsed;

    while (1) {
        printf("Enter the time elapsed (in seconds) between seeing the lightning and hearing the thunder: ");

        if (scanf("%lf", &time_elapsed) != 1) {
            printf("Error reading input. Please enter a valid floating-point number.\n");
            return ERROR_INVALID_INPUT;
        }

        int validation_result = validate_time_elapsed(time_elapsed);
        if (validation_result == SUCCESS) {
            break;
        } else if (validation_result == ERROR_NEGATIVE_TIME) {
            continue;
        }
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

    if (time_elapsed != ERROR_INVALID_INPUT && time_elapsed != ERROR_NEGATIVE_TIME) {
        double distance = SPEED_OF_SOUND * time_elapsed;
        print_distance(distance);
    }

    return 0;
}
