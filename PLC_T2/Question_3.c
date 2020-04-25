#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void static_allocation(){
static int array[400000]; //static array memory is alloted in program's data segment
}

void allocation_in_stack_memory(){
int array1[400000]; // non static array memmory allocation is done on stack, internally it calls alloca() to allocate memory which allocates from stack
}

void allocation_in_heap_memory(){
int *array2 = (int *) malloc(400000 * sizeof(int));// malloc allocates memory from heap memory
}

main(){
struct timespec time_1, time_2;
int i;
//for static allocation
clock_gettime(CLOCK_REALTIME, &time_1);
for (i = 0; i < 100000; i++){
static_allocation();
}
clock_gettime(CLOCK_REALTIME, &time_2);
printf("To do 100000 times static allocation of array size 400000, it took %d nanoseconds\n", time_2.tv_nsec - time_1.tv_nsec);

//for allocation on stack memory
clock_gettime(CLOCK_REALTIME, &time_1);
for (i = 0; i < 100000; i++){
allocation_in_stack_memory();
}
clock_gettime(CLOCK_REALTIME, &time_2);
printf("To do 100000 times allocation of array size 400000 on the stack memory, it took %d nanoseconds\n", time_2.tv_nsec - time_1.tv_nsec);

//for allocaion from heap memory
clock_gettime(CLOCK_REALTIME, &time_1);
for (i = 0; i < 100000; i++){
allocation_in_heap_memory();
}
clock_gettime(CLOCK_REALTIME, &time_2);
printf("To do 100000 times allocation of array size 400000 from heap memory, it took %d nanoseconds\n", difftime(time_2.tv_sec, time_1.tv_sec));
}