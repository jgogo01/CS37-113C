#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];
  
	// initialize array numbers from 1 to num by numbersPtr
	for (i = 1; i <= num; numbersPtr++, i++) {
	  *numbersPtr = i;
	}

	// loop through count
	for (i = 0; i < count; i++) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
	}

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (; *numbersPtr <= num; numbersPtr++) {
	  printf("%d ", *numbersPtr);
	}
	puts("");

  return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target){

  //Loop Find Target
  for(int i = 0; i <= size; i++){
    if(*(array+i) == target){
      //Loop Replace Next Index
      for(; i < size; i++){
        *(array+i) = *(array+(i+1));
      }
      *(array + (size - 1)) = 0;
    }
  }
}