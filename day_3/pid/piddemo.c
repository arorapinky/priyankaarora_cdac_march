#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
 
 int main(int argc, char const *argv[])
 
 {

     pid_t pid;
     pid = getpid ();
     printf ("process id (pid) : %d\n",pid);

     pid_t ppid;
     ppid = getppid ();
     printf ("parent process id (ppid) : %d\n",ppid);


     return 0;
 }
 