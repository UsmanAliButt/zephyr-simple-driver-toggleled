/*
Author: Usman Ali Butt usa_butt@hotmail.com
Dated : 6-october-2022
*/
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <toggledriver.h>

/*
Get device from node label. See toggle.overlay file. Compiled
files contains full device tree.
*/
static const struct device *dev = DEVICE_DT_GET(DT_NODELABEL(drivertoggle));

void main(void){	
	
	if (!device_is_ready(dev)) {		//Check if device is created and ready
		printk("Driver not ready");
		return;
	}
	
	//Print device name and object instance address
	printk("Device is %p, name is %s\n", dev, dev->name);
		
	while(1){
		alter(500);						//Alter led after ever 0.5 seconds 
	}
	
}