#include "stdio.h"
#include "string.h"
#include "stringtool.h"
/*���ַ�������߽�ȡn���ַ�*/
char * strleft(char *dst,char *src, int n)
{
    char *p = src;
    char *q = dst;
    int len = strlen(src);
    if(n>len) n = len;
    /*p += (len-n);*/   /*���ұߵ�n���ַ���ʼ*/
    while(n--) *(q++) = *(p++);
    *(q++)='\0'; /*�б�Ҫ�𣿺��б�Ҫ*/
    return dst;
}

/*���ַ������м��ȡn���ַ�*/
char * strmid(char *dst,char *src, int n,int m) /*nΪ���ȣ�mΪλ��*/
{
    char *p = src;
    char *q = dst;
    int len = strlen(src);
    if(n>len) n = len-m;    /*�ӵ�m�������*/
    if(m<0) m=0;    /*�ӵ�һ����ʼ*/
    if(m>len) return NULL;
    p += m;
    while(n--) *(q++) = *(p++);
    *(q++)='\0'; /*�б�Ҫ�𣿺��б�Ҫ*/
    return dst;
}

/*���ַ������ұ߽�ȡn���ַ�*/
char * strright(char *dst,char *src, int n)
{
    char *p = src;
    char *q = dst;
    int len = strlen(src);
    if(n>len) n = len;
    p += (len-n);   /*���ұߵ�n���ַ���ʼ*/
    while(*(q++) = *(p++));
    return dst;
}