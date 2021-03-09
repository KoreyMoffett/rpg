#include<iostream>
#include<cstdlib>
int gen() {
    int max;
    int dice;
   max = 20; //set the highest number that can be generated
   srand(time(0));
   dice = rand()%max;

}
