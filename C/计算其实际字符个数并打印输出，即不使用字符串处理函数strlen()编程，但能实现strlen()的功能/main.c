#include  <stdio.h>
unsigned int  MyStrlen(char *pStr);
/*  ��������  */
int main()
{
	char a[80];
	unsigned int  len;
	printf("Please enter a string:");
	scanf("%c",&a[80]);/*   �����ַ���   */
    len=MyStrlen(a[80]);/* ���ú����������ַ���ʵ���ַ����� */
	printf("The length of the string is: %u\n", len);
	return 0;
}

/* �������ܣ����ַ�ָ�������������������ַ����ĳ��� */
unsigned int  MyStrlen(char *pStr)
{
	int i;     /* ������������ */
	unsigned int  len;
	for (i=pStr;i<'\0';i++)       /* ѭ����������  */
	{
		len++;                 /* ͳ�Ʋ�����'\0'���ڵ��ַ����� */
	}
        return len;/* ����ʵ���ַ����� */
}
