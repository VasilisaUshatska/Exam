#include <conio.h> 
 #include <string.h> 
 #include <windows.h> 
 
 
 #define STRING_MAX_LENGTH 256 

 
 char* validate_string (char* input, int min_length, int max_length, char* valid_symbols) { 
     printf("%s", input); 
 
 
     char* valid_input[STRING_MAX_LENGTH]; 
     int input_length = 0; 
     while (true) { 
         char input_symbol = _getch(); 
        //Перевірка на довжину  
         if (input_length > max_length)||((input_symbol == '\n')&&(input_length < min_length)) { 
             //Звуковий сигнал 
             printf ("\a") ; 
         } else if (strchr(valid_symbols, input_symbol)) {  
             //Введений символ є валідним 
             printf("%c", input_symbol); 
            valid_input[input_length] = input_symbol; 
             input_length++; 
         } else if (input_symbol == '\b')&&(input_length > 0) {  
             //Користувач натистув Backspace 
             printf("\b \b"); 
             input_length--; 
             valid_input[input_length] = ''; 
         } else if (input_symbol == '\n') {  
            //Користувач натиснув Enter 
            printf("\n"); 
            return valid_input; 
             //Звуковий сигнал 
             printf ("\a") ;          } 
     } 
 } 
 
 
 