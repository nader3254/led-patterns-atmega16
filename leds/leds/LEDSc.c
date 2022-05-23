#include "LEDS.h"

void led_pattern1(uint8_t x[],uint8_t y)
{
	for (int i=0;i<y;i++)
	{
		led_on(x[i]);_delay_ms(100);
	}
		for (int i=y;i>0;i--)
		{
			led_off(x[i]);_delay_ms(100);
		}
	
}
void led_pattern2(uint8_t x1[],uint8_t y1)
{
	for (int i=0;i<y1;i++)
	{
		led_on(x1[i]);
		for (int j=0;j<y1;j++)
		{
			if (i!=j)
			{
				led_off(x1[j]);
			}_delay_ms(4);
		};
		
		
	}
	
			for (int i=y1;i>0;i--)
			{
				led_on(x1[i]);
				for (int j=y1;j>0;j--)
				{
					if (i!=j)
					{
						led_off(x1[j]);
					}
				}_delay_ms(40);
			}
			
	
}
void led_pattern3(uint8_t  x2[],uint8_t y2)
{
			for (int i=0;i<10;i++)
			{
				
				for (int j=0;j<y2;j++)
				{
					if (i%2==0&&j%2==0)
					{
						led_on(x2[j]);
					}
						
				}
				_delay_ms(100);
				for (int k=0;k<y2;k++)
				{
					led_off(x2[k]);
				}
					for (int k=0;k<y2;k++)
					{
						if (i%2==1&&k%2==1)
						{
							led_on(x2[k]);
						}
					}_delay_ms(100);
						for (int z=0;z<y2;z++)
						{
							led_off(x2[z]);
						}
						//_delay_ms(10);
			}
			
}
void led_pattern4(uint8_t x3[],uint8_t y3)
{
		for (int i=0;i<y3-4;i++)
		{
			
			led_on(x3[i]);led_on(x3[i+1]);led_on(x3[i+2]);led_on(x3[i+3]);
			for (int j=0;j<y3-4;j++)
			{
				if (i!=j&&j!=i+1&&j!=i+2&&j!=i+3)
				{
					led_off(x3[j]);
				}_delay_ms(8);
			};
			
			
		}
		
		for (int i=y3;i>0;i--)
		{
			led_on(x3[i]);led_on(x3[i-1]);led_on(x3[i-2]);led_on(x3[i-3]);
			for (int j=y3;j>4;j--)
			{
				if (i!=j&&j!=i-1&&j!=i-2&&j!=i-3)
				{
					led_off(x3[j]);
				}
			}_delay_ms(80);
		}
		for (int k=0;k<y3;k++)
		{
			led_off(x3[k]);
		}
}
void led_pattern5(uint8_t x4[],uint8_t y4)
{
	
	for (int i=0;i<y4;i++)
	{
		led_on(x4[i]);led_on(x4[y4-i-1]);_delay_ms(100);
	
	}
    for (int j=0;j<y4;j++)
	{
		led_off(x4[j]);led_off(x4[y4-j-1]);_delay_ms(100);
	
	}
	//led_on(x4[1]);
}
void led_pattern6(uint8_t x5[],uint8_t y5)
{
	//uint8_t m=y5/2;
	for (int i=0;i<y5;i++)
	{
		led_on(x5[i]);led_on(x5[y5-i-1]);
		for (int j=0;j<y5;j++)
		{
			if (j!=i&&j!=(y5-i-1))
			{
				led_off(x5[j]);
			}
		}
		_delay_ms(100);
	}
	
}
void led_pattern7(uint8_t x6[],uint8_t y6)
{
	for (int i=0;i<y6;i++)
	{
		led_on(x6[i]);led_on(x6[y6-i-1]);
	if (i!=y6-1)
	{ _delay_ms(100);
	}		
	}
	for (int i=0;i<y6;i++)
	{
		led_off(x6[i]);
	}
	uint8_t m=y6/2;
	for (int j=0;j<y6;j++)
	{
		led_on(x6[m-j]);led_on(x6[y6-m+j+1]);_delay_ms(100);
	}
	for (int i=0;i<y6;i++)
	{
		led_off(x6[i]);
	}
}
void led_pattern8(uint8_t x7[],uint8_t y7)
{
	
		for (int i=0;i<200;i++)
		{  uint8_t s=rand();
			if(s>=0&&s<y7)
		{led_on(x7[s]);_delay_ms(100);}
			//else{i--;ctr++;if (ctr==100){break;}}
			for (int k=0;k<y7;k++)
			{
				led_off(x7[k]);
			}
		}
	
}
void led_pattern9(uint8_t x[],uint8_t y)
{
	int r=0x0B;
	for (int i=0 ;i<y;i++)
	{
		if ((r&0x01)!=0)
		{
			out(x[i],'h');
		} 
		else
		{
			out(x[i],'l');
		}
		
		r=r>>1;
		
		
	}
	
	
	
	
}