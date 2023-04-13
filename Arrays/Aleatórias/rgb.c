#include <stdio.h>

int main(){
    unsigned char r,g,b,alfa;
    unsigned int rgb;
    scanf("%hhu %hhu %hhu %hhu",&r,&g,&b,&alfa);
    rgb = alfa;
    rgb += rgb | (b<<8);
    rgb += rgb | (g<<16);
    rgb += rgb | (r<<24);
    printf("RGB=%u\n",rgb);
    printf("RGB=%08X\n",rgb);
    return 0;
}