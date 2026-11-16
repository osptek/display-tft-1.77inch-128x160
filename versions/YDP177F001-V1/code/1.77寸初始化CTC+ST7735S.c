// N177-1216TCWPG02-H20  //
//Newvision  //
//ST7735S       //

/*====================================================*/
void Initial_ST7735(void)
{
	IOSET = nRESB;	
	Delay(10000);
	IOCLR = nRESB;
	Delay(10000);	
	IOSET = nRESB;	
	Delay(1000);
	
WriteCom(0x11); 
delayms(120); 
//----------------------------------
WriteCom(0xB1);
WriteData(0x00);//0x05	 
WriteData(0x08);//0x3A	 
WriteData(0x05);//0x3A
WriteCom(0xB2);
WriteData(0x05);
WriteData(0x3A);
WriteData(0x3A);
WriteCom(0xB3);
WriteData(0x05);
WriteData(0x3A);
WriteData(0x3A);
WriteData(0x05);
WriteData(0x3A);
WriteData(0x3A);
//------------------------------------End ST7735S Frame Rate-----------------------------------------//
WriteCom(0xB4); //Dot inversion
WriteData(0x03);
//------------------------------------ST7735S Power Sequence-----------------------------------------//
WriteCom(0xC0);
WriteData(0x62);
WriteData(0x02);
WriteData(0x04);
WriteCom(0xC1);
WriteData(0xC0);
WriteCom(0xC2);
WriteData(0x0D);
WriteData(0x00);
WriteCom(0xC3);
WriteData(0x8D);
WriteData(0x6A);
WriteCom(0xC4);
WriteData(0x8D);
WriteData(0xEE);
//---------------------------------End ST7735S Power Sequence-------------------------------------//
WriteCom(0xC5); //VCOM
WriteData(0x08);//0x12
//------------------------------------ST7735S Gamma Sequence-----------------------------------------//
WriteCom(0xE0);
WriteData(0x03);
WriteData(0x1B);
WriteData(0x12);
WriteData(0x11);
WriteData(0x3F);
WriteData(0x3A);
WriteData(0x32);
WriteData(0x34);
WriteData(0x2F);
WriteData(0x2B);
WriteData(0x30);
WriteData(0x3A);
WriteData(0x00);
WriteData(0x01);
WriteData(0x02);
WriteData(0x05);
WriteCom(0xE1);
WriteData(0x03);
WriteData(0x1B);
WriteData(0x12);
WriteData(0x11);
WriteData(0x32);
WriteData(0x2F);
WriteData(0x2A);
WriteData(0x2F);
WriteData(0x2E);
WriteData(0x2C);
WriteData(0x35);
WriteData(0x3F);
WriteData(0x00);
WriteData(0x00);
WriteData(0x01);
WriteData(0x05);
//------------------------------------End ST7735S Gamma Sequence-----------------------------------------//

WriteCom(0x3A); //65k mode
WriteData(0x05);
WriteCom(0x36); //65k mode
WriteData(0x40);
WriteCom(0x29); //Display on
WriteCom(0x2C);

}
 
