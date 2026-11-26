#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	char name[100];
	char firstname[50]="";
	char lastname[50]="N/A";

	printf("Please enter the name :");
	if (fgets(name,sizeof(name),stdin)!=NULL)
	{
		name[strcspn(name, "\n")]='\0';
	}

	int i=0,j=0;
	while(name[i]== ' ')
	{
		i++;
	}
	while(name[i]!=' '&&name[i]!='\0')
	{
		firstname[j]=name[i];
                i++;
		j++;
	}
        lastname[j]='\0';
	if(firstname[0]!='\0')
        {
              firstname[0]=toupper(firstname[0]);
	      for(int k=1;firstname[k]!='\0';k++)
	      {
		      firstname[k]=tolower(firstname[k]);
	      }
	}
        if(strcmp(lastname,"N/A")!=0)
	{
        lastname[0]=toupper(lastname[0]);
	for(int k=1;lastname[k]!='\0';k++)
	{
		lastname[k]=tolower(lastname[k]);
	}
	}
	
	printf("name:%s %s\n",firstname,lastname);
	return 0;
}


