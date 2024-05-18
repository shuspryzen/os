#include <stdio.h>
#include <dirent.h>
#include<unistd.h>
void main(){
	struct dirent **namelist;
	int i,n;
	char path[100];
	getcwd(path,sizeof(path));
	n=scandir(path,&namelist,0,alphasort);
	if(n<0)
		printf("Error");
	else
		for(i=0;i<n;i++)
			printf("%s\n",namelist[i]->d_name);
			
}
