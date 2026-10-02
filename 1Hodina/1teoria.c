#include <stdio.h>
#include <stdbool.h>
int main() {
    char c = '0'; //vypisuje bez uvodzovies cisla iba ascii hodnoty 
    int c= 65;
    float d = 5.0;
    double d = 5.5;
    // long, short, uint, int8_t = hovori int, aby bol 8bitovy, int64_t = moze byt problem pri starsich pocitacoch ...
    // size_t
    // boolean defaultne tam nie je, ale musime include dat na stdbool.h
    bool b = true;
    char retazec[] = "adfa"; //prvy typ retazcu
    
    printf("%c",c); //ak tam dame %c ale mame pri prehlasenii prememnnej int, stale to bude ascii
}