#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <pwd.h>

char *uid_to_name(uid_t uid)

{ 
  struct passwd *getpwuid(), *pw_ptr;
  static char numstr [10];
  if ((pw_ptr = getpwuid(uid)) == NULL){
      sprintf(numstr, "%d", uid);
      return numstr;
  }
  else
      return pw_ptr->pw_name;
}

