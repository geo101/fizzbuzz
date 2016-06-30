/* To Compile : 
   
   Nav to : E:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts
   Run "Developer Command Prompt for VS2013"
   cl fizzbuzz.v2.c
   
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{			
	int max = (argc >= 3) ? atoi(argv[2]) : 100;
	char * prefix = "";	
    for(int i=1;i<=max;i++){		
		((argc >= 2) && (strcmp(argv[1], "SHOW")==0)) ? sprintf(prefix,"%3i - ", i) : 1;
		
		if ((i % 3 == 0) && (i % 5 == 0)) 			
			printf("%sFizzBuzz\n", prefix);
		else if (i % 3 == 0) 			
			printf("%sFizz\n", prefix);
		 else if (i % 5 == 0) 			
			printf("%sBuzz\n",prefix);			
		 else 
			printf("%3i\n", i);		
	}
    return 0;
}

