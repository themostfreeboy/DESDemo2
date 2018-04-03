/*-------------------------------------------------------
      Data Encryption Standard  56位密钥加密64位数据 
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
	des_code(origin_message,key, coded_message);//des算法加密
    des_decode(coded_message, key, decoded_message);//des算法解密
    des_print((unsigned char*)origin_message);//以16进制形式显示加密后或解密后的信息
	des_print((unsigned char*)coded_message);//以16进制形式显示加密后或解密后的信息
	des_print((unsigned char*)decoded_message);//以16进制形式显示加密后或解密后的信息
	system("pause");
	return 0;
}









