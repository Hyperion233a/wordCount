#include<iostream>
#include<string>
using namespace std;

void Find()
{
    FILE *fp;
    fp=fopen("C:\\Users\\10921\\Desktop\\asd.txt","r");
	char *s2[WORDLEN], line[300];
	char word[WORDLEN], *p;
	int i, len,lenword, how[WORDLEN];

	for (i=0; i<WORDLEN; i++)
	{
		s2[i] = (char *)malloc(WORDLEN);
	}
	memset(how, 0, sizeof(how));		//�����ʵ䣬���ļ����룬����ÿ�������ÿո������Сд
	lenword = BuildDictionary(s2);
	printf("\nÿ�����ʳ��ִ�����\n");		//���һ���ַ����س�����
	fgets(line,300,fp);
	FindWord(line, how, s2, lenword);		//�������ͳ�ƽ��
	for (i=0;i<WORDLEN;i++)
	if(how[i])printf("%-10s %-10d \n",s2[i],how[i]);
	printf("\n");
	//for (i=0;i<WORDLEN;i++)
	//	if(how[i])printf("%-10d ",how[i]);
	//		printf("\n");
}
int main(){

    char filename[30];
    // totalNum[0]: ������  totalNum[1]: ���ַ���  totalNum[2]: �ܵ�����
    int totalNum[3] = {0, 0, 0};

    printf("Input file name: ");
    scanf("%s", filename);

    if(getCharNum(filename, totalNum)){
        printf("Total: %d lines, %d words, %d chars\n", totalNum[0], totalNum[2], totalNum[1]);
    }else{
        printf("Error!\n");
    }
	

    return 0;
}

