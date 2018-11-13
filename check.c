#include "myas.h"

int is_valid(char *op, char *args)
{
	char *src;
	char *dest;
	char temp[256];
	strcpy(temp,args);
		src = strtok(temp,",");
		dest = strtok(NULL,",");


	if(src[0]=='('&&dest[0]=='(')
		return 0;
	if(src[0]=='('&&dest[0]=='-'&&dest[1]=='(')
		return 0;
	if(src[0]=='('&&dest[0]=='0')
		return 0;
	if(src[0]=='-'&&src[1]=='('&&dest[0]=='(')
		return 0;
	if(src[0]=='-'&&src[1]=='('&&dest[0]=='(')
		return 0;
	if(src[0]=='-'&&src[1]=='('&&dest[0]=='0')
		return 0;
	if(src[0]=='0'&&dest[0]=='(')
		return 0;
	if(src[0]=='0'&&dest[0]=='-')
		return 0;
	if(src[0]=='0'&&dest[0]=='0')
		return 0;
	
	return 1;
}
