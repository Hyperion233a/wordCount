#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;
int line(){
                 char buf1[1000];    //����һ�����飬��������ַ�

//	
//	FILE *fp;
//	fp=fopen("test.txt","r");
//	if(!fp)
//	return -1;
//fscanf(fp,"%s",buf1);
ifstream ifile;               //���������ļ�
	int i=0;
    ifile.open("test.txt");
	while(!ifile.eof()){    
        buf1[i]=ifile.get();
         i++;
}
int count=0;
	ifile.close();
	

	char *buf=buf1;
	while(*buf)
	{    
		if(*buf=='\n')
		{   
			buf++;
			if(*buf){
				 count++;
				 continue;
			}
		
			else break;	
		}
		
		else buf++;
		
	}
	return count;
}
int main(){
	
	cout<<line();

	return 0;
}
