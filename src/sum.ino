#include <Arduino.h>


    int GetIntNumber()
 {
    char ibuffer[16];
int N;
while(Serial.available() <= 0);
Serial.readBytes(ibuffer, sizeof(ibuffer));
N = atoi(ibuffer);
return N;
 }
 void CalculateSum()
 {
    int N1, N2, sum;
    Serial.println("enter first number: ");
    N1 = GetIntNumber();
    Serial.println("enter second number:");
    N2 = GetIntNumber();
    Serial.print("sum = "); 
    Serial.println(N1 + N2);
 }