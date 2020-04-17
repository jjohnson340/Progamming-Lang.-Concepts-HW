#include <stdio.h>
#include <time.h>

int main()
{
  
clock_t start, end;
double cpu_time_used;
  
//Starting the cpu clock.
start = clock();
  
for(int i=0; i<10000; i++){
my_func_with_only_subscript();   
}
  
//Closing the cpu clock.
end = clock();
  
//Calculating time elapsed in secs.
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  
printf("Time taken with subscript references::%f\n",cpu_time_used);
  
//Starting the cpu clock
start = clock();
  
for(int i=0; i<10000; i++){
my_func_with_pointers();
}
  
//Closing the cpu clock.
end = clock();
  
//Calculating the time elapsed in array reference through pointers.
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  
printf("Time taken with pointers::%f\n",cpu_time_used);
  
return 0;
}
//Function to reference the 2D array through subscripts.
void my_func_with_only_subscript()
{ 
//Assuming that the usage of
int arr[15][5] = {0}; //Square matrice is not mandatory
for(int j=0; j<5 ; j++){
for(int i=0; i<15; i++){
arr[i][j]; //No operation is done, only accessing the element
}
}
return;
}
//Function to reference the 2D array through pointers.
void my_func_with_pointers()
{ //Assuming that the usage of
int arr[15][5] = {0}; //Square matrice is not mandatory
for(int j=0; j<5 ; j++){
for(int i=0; i<15; i++){
*(*(arr+i)+j); //No operation is done, only accessing the element
}
}
return;
}


