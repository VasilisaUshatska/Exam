#include <conio.h> 
 #include <string.h> 
 #include <windows.h> 
 
 
 #define STRING_MAX_LENGTH 256 
int validate_integer (char* input, int min, int max) { 
     char* valid_input; 
     int min_digits = count_digits(min); 
     int max_digits = count_digits(max); 
     valid_input = validate_string(input, min_digits_count, max_digits_count, DIGITS); 
     int number = (int)strtol(valid_input, (char **)NULL, 10); 
     return number; 
 } 
