#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	char ch;
	//�������в����Ĵ��� 
	string si="-i",so="-o",sm="-m",sn="-n";
	int inputpos=0,outputpos=0,mpos=0,npos=0;
	for(int i=0;i<argc;i++)
	{
		if(argv[i]==si)inputpos=i+1;
		if(argv[i]==so)outputpos=i+1;
		if(argv[i]==sm)mpos=i+1;
		if(argv[i]==sn)npos=i+1;
	}
	infile.open(argv[inputpos]);
	int countn=0,countt=0,count0=0,countc=0;//���� �Ʊ�� �ո� �ַ���ͳ�� 
	while(!infile.eof())
    {
    	char temp;
       temp=infile.get();
       if(temp=='\n'||temp=='\r')countn++;
       if(temp=='\t')countt++; 
       if(temp==' ')count0++;
       countc++;
    }
    infile.close();
    countc--;
    
	string sign="mn";//Ĭ��ʵ�����й��� 
	int m,n=0;//m,n��Ĳ����ĳ�ʼ�� 
	if(argc==9)	m= atoi(argv[mpos]),n=atoi(argv[npos]);
	if(argc==7)
	{
		if(mpos!=0)
		{
		sign="om";
		m=atoi(argv[mpos]);//only "m"-methed		
		}
		else if(npos!=0)
		{
			sign="on";
			n=atoi(argv[npos]);//only "n"-methed
		}
		
		else cout<<"something goes wrong?"<<endl;
	}
	if(sign=="mn")
	{
		cout<<"ʵ��m,n���ֹ��ܣ�������ֱ�Ϊ"<<m<<" "<<n<<endl;
		//ȫ������ 
		
		
		
		
		
	}
	else if(sign=="on")
	{
		cout<<"��ʵ��n���ܣ������Ϊ"<<" "<<n<<endl;
		//�����Զ����Ƶͳ��������ܣ�Ĭ�����10��������ָ����Ŀʱ����ʵ����Ŀ�����
		
		
		
	}
	else if(sign=="om")
	{
		cout<<"��ʵ��m���ܣ������Ϊ"<<" "<<m<<endl;
		//���ô����Ƶͳ�ƹ��ܣ�Ĭ�϶Ե��ʽ��д�Ƶͳ��
		
		
		
	}
	else cout<<"sign wrong!!!"<<endl;
	
	
	
	outfile.open(argv[outputpos]);
	//����д�� 
	outfile.close();
	return 0;
}
