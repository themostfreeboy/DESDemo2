/*-------------------------------------------------------
      Data Encryption Standard  56λ��Կ����64λ���� 
				  2011.10
--------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include "des.h"

int main()
{
	const char origin_message[9]="abcdefgh";
	const char key[9]="12345678";
	char coded_message[9];
	char decoded_message[9];
	des_code(origin_message,key, coded_message);//des�㷨����
    des_decode(coded_message, key, decoded_message);//des�㷨����
    des_print((unsigned char*)origin_message);//��16������ʽ��ʾ���ܺ����ܺ����Ϣ
	des_print((unsigned char*)coded_message);//��16������ʽ��ʾ���ܺ����ܺ����Ϣ
	des_print((unsigned char*)decoded_message);//��16������ʽ��ʾ���ܺ����ܺ����Ϣ
	system("pause");
	return 0;
}









