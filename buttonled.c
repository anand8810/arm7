	#include<LPC214X.h>
void delay(){
	unsigned int i=0;
	while(i<200000)
		{
			i++;
		}
}
int main(){
	//set the direction as output
	IODIR0 |=(0x01<<16);
	IODIR1 &= ~(0x01<<16);
	while(1){
	//turn on led
	if((IO1PIN & (1<<16	))==0)
		{
			
		IOSET0 |=(0x01<<16);
		//delay();
		}
	else
		{
	//turn off led
		IOCLR0 |=(0x01<<16);
		//delay();

		}
		delay();
}
}


					   

