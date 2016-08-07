#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int a[2], b[2], bytesread;
  char message1 [100], message2 [100];
  pipe(a);
  pipe(b);
  if(fork()){ // Parent
    char* phrase1="Hello, What is your name and ID?";
    close (a[0]);
    write (a[1],phrase1,strlen(phrase1)+1);
    close (a[1]);
    wait();
    close (b[1]);
    bytesread = read (b[0],message2,100);
    printf ("- Child: %s\n\n",message2);
    close (b[0]);
  }
  else { // Child
    close (a[1]);
    bytesread = read (a[0],message1,100);
    printf ("\n- Parent: %s\n",message1);
    close (a[0]);
    close (b[0]);
    char* phrase2 = "Hi, I am Emad, my ID is 1007395";
    write (b[1],phrase2,strlen(phrase2)+1);
    close (b[1]);
  }
  return 0;
}
