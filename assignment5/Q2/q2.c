#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void terminationHandler();

int main(){
   signal(SIGINT, terminationHandler);
   printf("\nProtected process in progress ....\n");
   for(int i = 0; i < 10; i++) {
      sleep(1);
   }
   printf("The process has done its job and will terminate now.\n\n");
}


void terminationHandler(){
   printf (" [ Sorry, you cannot use Ctrl+C keys ]\n");
}
