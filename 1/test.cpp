#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   int temp = 0;
   FILE *fp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
   fscanf(fp, "%d", &temp);
   cout.precision(4);
   cout << "CPU Temp:" << temp/1000.f << "°C\n";
   fclose(fp);
   return 0;
}
