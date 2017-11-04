#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(){
 int nHeight, nSubsidy, nSubsidyPrev;
 for(nHeight=1100000;nHeight<5000000;nHeight++){
  nSubsidy = floor( 19697202017 / (floor(nHeight/100000)*100000) );
  if(nSubsidy!=nSubsidyPrev){
   printf("block: %d reward: %d\n", nHeight, nSubsidy);
   nSubsidyPrev=nSubsidy;
  }
 }
}


