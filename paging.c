#include<stdio.h>
void main()
{
int imem[100][100],pmem[500],ptable[100],psize,n,i,j,phyadd;
printf("\nEnter the no. of pages: ");
scanf("%d",&n);
printf("\nEnter the page size: ");
scanf("%d",&psize);
printf("\nEnter the data values to be stored: ");
for(i=0;i<n;i++)
for(j=0;j<psize;j++)
scanf("%d",&imem[i][j]);
printf("\nEnter the base address for each page: ");
for(i=0;i<n;i++)
scanf("%d",&ptable[i]);
printf("\nLogical memory\n");
printf("\nPage no\tOffset\tValues\n");
for(i=0;i<n;i++)
for(j=0;j<psize;j++)
printf("\n\t%d\t%d\t%d\n",i,j,imem[i][j]);
printf("\nPage table\n");
printf("\nIndex\tbase address ");
for(i=0;i<n;i++)
printf("\n%d\t%d",i,ptable[i]);
printf("\nPhysical Memory\n");
printf("\nLocation\tvalue\tpage no\n");
for(i=0;i<n;i++)
for(j=0;j<psize;j++)
{
phyadd=(ptable[i]*psize)+j;
pmem[phyadd]=imem[i][j];
printf("\n%d\t%d\tpage%d",phyadd,imem[i][j],i);
}
}
