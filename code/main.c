#include <REGX51.H>


unsigned char code Code7Seg[] = {0xC0, 0xF9,0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

#define LED_PORT P3
sbit LED1_PIN = P2^0;
sbit LED2_PIN = P2^1;
sbit LED3_PIN = P2^2;
sbit LED4_PIN = P2^3;
	
int dem;

void Delay_ms(unsigned int t)
	{
		unsigned int x,y;
		for(x=0;x<t;x++)
		{
			for(y=0;y<123;y++);
		}	
	}
void seg0()
	{
			 
	 LED_PORT = Code7Seg[0];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN = 0;				// Bat LED 2
//		Delay_ms(1000);
		/*Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 2
		LED_PORT = Code7Seg[1];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
*/
	}
	
void seg1()
	{
		LED_PORT = Code7Seg[1];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		/*Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 2
		LED_PORT = Code7Seg[1];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
		*/
	}
	
void seg2()
	{
		LED_PORT = Code7Seg[2];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
		/*	LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 2
		LED_PORT = Code7Seg[2];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg3()
	{
		LED_PORT = Code7Seg[3];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
/*			 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 3
		LED_PORT = Code7Seg[3];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg4()
	{
		LED_PORT = Code7Seg[4];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
}			/* 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 2
		LED_PORT = Code7Seg[4];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg5()
	{
			
LED_PORT = Code7Seg[5];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);		// LED 1 sang so 0
		}
	/*	LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 5
		LED_PORT = Code7Seg[5];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg6()
	{
		LED_PORT = Code7Seg[6];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
		/*	 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 6
		LED_PORT = Code7Seg[6];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg7()
	{
		LED_PORT = Code7Seg[7];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
		/*
			 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 7
		LED_PORT = Code7Seg[7];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg8()
	{
		LED_PORT = Code7Seg[8];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
		/*	 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 8
		LED_PORT = Code7Seg[8];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}*/
void seg9()
	{
		LED_PORT = Code7Seg[9];
//		LED1_PIN = 0;				// Bat Led 1
//		LED2_PIN=0;
//		Delay_ms(1000);
		}
			/* 	// LED 1 sang so 0
		LED_PORT = Code7Seg[0];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 9
		LED_PORT = Code7Seg[9];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}	*/
		/*
	void seg10()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 0
		LED_PORT = Code7Seg[0];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg11()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 1
		LED_PORT = Code7Seg[1];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg12()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 2
		LED_PORT = Code7Seg[2];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg13()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 3
		LED_PORT = Code7Seg[3];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg14()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 4
		LED_PORT = Code7Seg[4];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg15()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 5
		LED_PORT = Code7Seg[5];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	void seg16()
	{
			 	// LED 1 sang so 1
		LED_PORT = Code7Seg[1];
		LED1_PIN = 0;				// Bat Led 1
		Delay_ms(1);
		LED1_PIN = 1; 				// Tat LED 1

		// LED 2 sang so 6
		LED_PORT = Code7Seg[6];
		LED2_PIN = 0;				// Bat LED 2
		Delay_ms(1);
		LED2_PIN = 1;				// Tat LED 2
	}
	
*/
void main()
{
unsigned char dem=0;
	LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=1;
 	while(1)
	{
		if(P2_5==0)
		{
			Delay_ms(100);
			if(P2_5==0);
			seg1();LED1_PIN=0;Delay_ms(1000);LED1_PIN=1;
			seg2();LED2_PIN=0;Delay_ms(1000);LED2_PIN=1;
			seg3();LED3_PIN=0;Delay_ms(1000);LED3_PIN=1;
			seg4();LED4_PIN=0;Delay_ms(1000);LED4_PIN=1;
			seg5();LED1_PIN=0;Delay_ms(1000);LED1_PIN=1;
			seg6();LED2_PIN=0;Delay_ms(1000);LED2_PIN=1;
			seg7();LED3_PIN=0;Delay_ms(1000);LED3_PIN=1;
			seg8();LED4_PIN=0;Delay_ms(1000);LED4_PIN=1;
			LED1_PIN=LED2_PIN=LED1_PIN=LED4_PIN=1;
		}
		
			if(P2_4==0)
			{
				
				Delay_ms(100);
				if(P2_4==0);
				seg1();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;	
				Delay_ms(300);
				
				seg2();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;	
				Delay_ms(300);	
				
				seg3();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
				seg4();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
				seg5();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
				seg6();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
				seg7();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
				seg8();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);	
				
				seg9();
				LED1_PIN=0;Delay_ms(1000);
				LED1_PIN=1;
				Delay_ms(300);
				
			}
			//0 led sang
			
			if(P2_6==0)
			{
				Delay_ms(100);
				if(P2_6==0);
				seg9();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg8();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg7();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg6();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg5();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg4();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg3();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg2();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg1();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				seg0();LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=0;Delay_ms(1000);
				LED1_PIN=LED2_PIN=LED3_PIN=LED4_PIN=1;
			}
			if(P2_7==0)
				{
			while(P2_7==0)
			{
				
				dem++;
			}
			//LED1_PIN = 0;		
			LED2_PIN = 0;	
			LED_PORT = Code7Seg[dem%7+1];	
			Delay_ms(300);
			}
}
}