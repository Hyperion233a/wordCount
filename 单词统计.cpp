#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
int check(char a[]){  //���ָ���ÿ�������Ƿ�������� 
	int k,kk,i;
	k=strlen(a);
	kk=1;
	for(i=0;i<4;i++){
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		continue;
		else{
			kk=0;
			break;
		}
	}
	return kk;
}
int wordcount(char s[]){
	int length,k,flag,count,i;
	char a[100000];
	length=strlen(s);
	s[length]='\n';
	k=0;count=0;
	for(i=0;i<=length;i++){
		if((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
			a[k]=s[i];
			k++;
		}
		else{
			if(k==0)
			continue;
			if(k!=0){
				flag=check(a);
				if(flag==1)
				count++;
				k=0;
				memset(a, 0, sizeof(a));
			}
			
		}
	}
	return count;
}
int main(){
	int sum=0;
	int i=0,j,k;
	char s[100000];   //�ַ�������s�����������ļ��е��ַ���Ҳ�Ǻ���ģ���Ψһ�ӿ� 
	ifstream ifile;               //���������ļ�
    ifile.open("input.txt");
	while(ifile.get(s[i])){      
        if(s[i]=='\n') break;
         i++;
     }
	s[i]='\0';
	ifile.close();
	sum=wordcount(s); //����wordcount����ͳ���ļ��ĵ������� 
	cout<<"words: "<<sum;
	return 0;
}
