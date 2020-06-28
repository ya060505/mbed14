#include"mbed.h"


Serial pc(USBTX,USBRX); //tx,rx

Serial uart(D1,D0); //tx,rx


int main(){

   uart.baud(9600);

   while(1){

      if(uart.readable()){

            char recv = uart.getc();

            //float r = (float)recv;

            pc.putc(recv);

            //pc.printf("\n");

            //pc.printf("%f\n", r);

      }

   }

}