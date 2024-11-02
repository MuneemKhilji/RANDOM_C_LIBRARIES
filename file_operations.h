#include<fcntl.h>
#include<unistd.h>
#define create_file(a, perms)    {int creating_file_shared_for_ipc = open (a, O_WRONLY | O_CREAT, perms);\
close(creating_file_shared_for_ipc);}
