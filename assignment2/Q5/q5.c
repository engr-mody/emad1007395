#include <stdio.h>

int main() {
   printf("\n");
   char *names[10] = {"Ahmad", "Ayman", "Badr", "Bandar",
	"Emad", "Fawaz", "Fouad", "Hani", "Jalal", "Zyad"};
   int grades[10] = {90,85,77,80,94,70,72,95,85,60};
   for(int i=0; i < 10; i++) {
	printf("%s\t%d\n", names[i], grades[i]);
   }
   return 0;
}
