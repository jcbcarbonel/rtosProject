#include <stdio.h>
#include "btd.h"

void read_sensor_data(){
       // Prompt the user to enter a character
    printf("\nEnter a the header and bytecount: \n");

    // Read a single character from the keyboard
    for (int i=0;i<3;i++){
        scanf("%02x", &catch_data[i]); // The space before %c consumes any leftover whitespace
        if (i==2){
             msg_byte_count = catch_data[i];
        }
       
    }

    
    printf("\nMessage Length: %d bytes.", msg_byte_count);
   
    // Print the character and its hexadecimal representation
    printf("\nThe character has a hexadecimal value of ");
    
    for (int i=0;i<3;i++){
        printf("0x%02X ", catch_data[i]);
    }
    
}