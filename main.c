#include <main.h>
int display[10] = {0x3f,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7f,0x6f};
int i = 0;
void main()
{
  set_tris_c(0x00);
  set_tris_a(0xff);
  set_tris_d(0x00);
  output_c(0x00); // onlar basama��
  output_d(0x00); //birler basama��

  while(TRUE){
   
      
     if(input(pin_A0) == 1){
      delay_us(200);
      i++;
      if(i == 100){
         i = 0;
      }
       int onlar = i/10;
       int birler = i%10;
       output_c(display[onlar]);
       output_d(display[birler]);
      while(input(pin_A0) == 1);
      delay_us(200);
     }
     
     if(input(pin_A1) == 1){
      delay_us(200);
      i--;
      if(i == 0){
         i = 99;
      }
       int onlar = i/10;
       int birler = i%10;
       output_c(display[onlar]);
       output_d(display[birler]);
      while(input(pin_A1) == 1);
      delay_us(200);
     }
      
    
  }
  

}
