#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int opt;

  while((opt  = getopt(argc, argv, "cduf:s:")) != -1){
    switch (opt)
      {
      case 'c':
                 printf("Option: %c\n", opt); break;

      case 'd':
                  printf("Option: %c\n", opt); break;

      case 'u':
                 printf("Option: %c\n", opt); break;
      case 's':
        printf("Option: %c\n", opt);
        printf("Option paramater: %s\n ", optarg); break;

      case 'f':
        printf("Option: %c\n", opt);
        printf("Option parametar: %s\n ", optarg);
        break;

      case ':':
        printf("Option requires argument \n");
        break;
      case '?':
        printf("Uknown option: %c\n", optopt);
        break;

   }
 }
     for(; optind < argc; optind++)
                printf("argument: %s\n", argv[optind]);
        exit(0);

}

