/*
Author: Usman Ali Butt usa_butt@hotmail.com
Dated : 6-october-2022
*/
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
//#include <../Toggle_led_driver/Toggledriver.h>

#define LED0_NODE DT_ALIAS(led0)
static const struct device *dev = DEVICE_DT_GET(DT_ALIAS(led0));
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED0_NODE, gpios);

void main(void){
	
	if (!device_is_ready(dev)) {
		//printk("Error: GPIO device %s is not ready\n",toggle_led->name);
		//return;
	}
	printk("device is %p, name is %s\n", dev, dev->name);

	if (!device_is_ready(led.port)) {
		//printk("Error: GPIO device %s is not ready\n",toggle_led->name);
		//return;
	}
	
	while(1){
		k_sleep(K_MSEC(1000));
		}
	
	
}