#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{

	char *src;
	char *dest;
	char temp[256];
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}

//	char temp[100];	
//	strcpy(mcode,"AB CD EF");
	
  //  char *src;
//	char *dest;
	strcpy(temp,args);
	src=strtok(temp,",");
	dest=strtok(NULL,"\n");


	
	if(src[0]=='%'&&dest[0]=='%')
		strcpy(mcode,"89");
	else if(src[0]=='('&&src[6]==')'&&dest[0]=='%')
		strcpy(mcode,"8b");
	else if(src[0]=='-'&&dest[0]=='%')
		strcpy(mcode,"8b");
	else if(src[0]=='0'&&dest[0]=='%')
		strcpy(mcode,"a1");
	else if(src[0]=='%'&&dest[0]=='0')
		strcpy(mcode,"a3");
	else if(src[0]=='$'){
		if(strcmp(dest,"%eax"))
			strcpy(mcode,"b8");
		else if(strcmp(dest,"%ecx"))
			strcpy(mcode,"b9");
		else if(strcmp(dest,"%edx"))
			strcpy(mcode,"ba");
		else if(strcmp(dest,"%ebx"))
			strcpy(mcode,"bb");
		else if(strcmp(dest,"%esp"))
			strcpy(mcode,"bc");
		else if(strcmp(dest,"%ebp"))
			strcpy(mcode,"bd");
		else if(strcmp(dest,"%esi"))
			strcpy(mcode,"bf");

	}

	return 1;	
}
