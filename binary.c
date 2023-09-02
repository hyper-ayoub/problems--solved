 #include <stdio.h>
 int main () {
        
        //  &: and;
        //   | : OR 
        //   ^ : XOR
        //   ~ : bitwise compliment operator (0 to 1) (1 to 0)
        //   << : shift left 
        //   >>  :shift right

        int x = 6;  //00000110
        int y = 12;  //00001100
        int z = 0;  //00000000
          
         z = x & y;
         printf("AND : %d\n", z);
             

         z = x | y;
         printf("OR  : %d\n" , z);


         z = x ^ y;
         printf("XOR : %d\n" , z);

         z = ~x;

         printf("Bitwise complement of x: %d\n", z);
         
         z = x << 1;
         printf ("shift left: %d\n" , z); 
         z = x >> 1;
         printf("shift right: %d\n" , z);

        return 0;
 }