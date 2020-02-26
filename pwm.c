#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#include <stdlib.h>

#define	p1	1
#define	p2	3
#define	p3	4
#define	p4  24

int main ()
{

  wiringPiSetup () ;
  pinMode (p1, OUTPUT) ;
  pinMode (p2, OUTPUT) ;
  pinMode (p3, OUTPUT) ;
  pinMode (p4, OUTPUT) ;
  
  int no;
    
 no = (digitalWrite(p1)<<3)+(digitalWrite(p2)<<2)+(digitalWrite(p3)<<1)+digitalWrite(p4);   
  
  
  printf(" %d ",no);  
  return 0 ;
}
