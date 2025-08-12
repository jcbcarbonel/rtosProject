#include "btd200.h"

void read_sensor_msg(){
       // Prompt the user to enter a character
    printf("\nEnter a the header and bytecount: \n");

    // Read a single character from the keyboard
    for (int i=0;i<3;i++){
        scanf("%02x", &sensor_msg[i]); // The space before %c consumes any leftover whitespace
        store_msg[i] = sensor_msg[i];
    }
   
    // Print the character and its hexadecimal representation
    printf("\nThe character has a hexadecimal value of ");

    for (int i=0;i<3;i++){
        printf("0x%02X ",store_msg[i]);
    }
}