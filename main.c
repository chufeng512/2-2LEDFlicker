#include <REGX51.H>
#include <intrins.h> //_nop_()��Ҫ�Ŀ�

void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
		while(1)
		{
			P0 = 0xFE; //1111 1110
			//���Ͳ������500ms
			Delay500ms();
			
			P0 = 0xFF;	//1111 1111
			
			Delay500ms();
		}
}
