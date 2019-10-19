#include <stdio.h>
#include<stdlib.h> 
#include<fstream>
#include<iostream>
using namespace std;
int lines()
{
    FILE * fp;
    int num=0;
    char buff[2550];
    if((fp=fopen("test.txt","r"))==NULL)
    {    printf("Can't open file\n");
       return -1;
    }
    while (!feof(fp))
    {    fgets(buff,2550,fp);
       num++;
    }
    fclose(fp);
    return num;
}
int main(){
	cout<<lines();
	return 0;
}
