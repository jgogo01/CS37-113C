#include <stdio.h>

void Ladder(int n, int start) {
  for (int i = 0; i < n; ++i) {
    if (start == i) {
      printf("|-O-|\n");
    } else if (start + 1 == i) {
      printf("|-^-|\n");
    } else {
      printf("|---|\n");
    }
  }
}

int main() {
  int n = 0;
  int inpStep = 0;
  int i = 1;

  printf("Input number of stairs: ");
  scanf("%d", &n);
  int step = (n - 2);

  printf("---- round 1 ----\n");
  Ladder(n, step);

  while (1) {
    printf("Input step command: ");
    scanf("%d", &inpStep);
    if (inpStep == 0) {
      break;
    }

    if (step - inpStep < 0) {
      step = 0;
    } else if (step - inpStep > (n - 2)) {
      step = (n - 2);
    } else {
      step -= inpStep;
    }

    printf("---- round %d ----\n", i + 1);
    Ladder(n, step);
    i++;
  }
}