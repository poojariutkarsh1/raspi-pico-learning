#include<stdio.h>
#include<pico/stdlib.h>

int main(){
stdio_init_all();

sleep_ms(2000);

while(1){
    printf("Hello Pico! \n");
    sleep_ms(1000);
}
}
