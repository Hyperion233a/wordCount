#include<stido.h>
#include<frestream>
using namespace std;
int length;
int count;
int read numbe(int argc,char* argv[])
{
	 ifstream ifile;     //˵�������ļ�������ifile    
     ofstream ofile;     //˵������ļ�������ofile
     char* inputname=NULL;   //��������ļ� 
     char* Outputname=NULL;  //��������ļ� 
     string a = "-m", b = "-n", c= "-i", d="-o";
	 //�жϲ������� 
	for (int i = 1; i < argc; i++ )
	{
		if (argv[i] == a)
		{
			length=argv[++i][0]-'0';// ָ����ͳ�ƵĴ��鳤��
		}
		else if (argv[i] == b)
		{
			count=argv[++i][0]-'0';// ָ����Ҫ����Ĵ�Ƶ���е�ǰn��
		}
		else if (argv[i] == c)
		{
			InputName=argv[++i];//ָ�������ļ�
		}
		else if (argv[i]==d)
		{
			OutputName=argv[++i];//ָ�����������ļ�
		}
		
}
}




int main(int argc,char* argv[])
{
	 number(argc,argv[]);
	
	return 0;
}

