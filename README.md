# Thunderstorm Distance Calculator

This is a simple C program that calculates the approximate distance of a thunderstorm from the time elapsed between seeing the lightning and hearing the thunder. The program uses the speed of sound in air (approximately 343.2 meters per second) to make this calculation.

## How to Use

1. Clone or download the source code to your local machine.
2. Open a terminal or command prompt and navigate to the directory where the code is located.
3. Compile the code using a C compiler (e.g., GCC or Clang) with the following command:
   ```
   gcc main.c -o tstorm_dist_calc
   ```
   Note: Make sure you have a C compiler installed on your system before proceeding.
4. Run the compiled program with:
   ```
   ./tstorm_dist_calc
   ```
5. Follow the on-screen instructions to enter the time elapsed between seeing the lightning and hearing the thunder.

## Program Behavior

1. The program starts by prompting the user to enter the time elapsed (in seconds) between seeing the lightning and hearing the thunder.
2. If the user enters an invalid input (non-numeric value), the program displays an error message and asks the user to enter a valid floating-point number.
3. If the user enters a negative value for the time elapsed, the program displays an error message indicating that the time elapsed cannot be negative.
4. If the user enters a valid non-negative value for the time elapsed, the program calculates the approximate distance of the thunderstorm and displays it in meters, rounded to two decimal places.
5. If the calculated distance is negative (indicating an error), the program does not display any distance information.

## Constants and Error Codes

- `SPEED_OF_SOUND`: The speed of sound in air used in the distance calculation (approximately 343.2 meters per second).
- `SUCCESS`: An integer constant representing successful execution or validation.
- `ERROR_INVALID_INPUT`: An integer constant indicating an invalid input (non-numeric value) entered by the user.
- `ERROR_NEGATIVE_TIME`: An integer constant indicating a negative value for the time elapsed entered by the user.
