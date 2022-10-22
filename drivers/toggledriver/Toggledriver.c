/*
Author: Usman Ali Butt usa_butt@hotmail.com
Dated : 6-october-2022
*/

/*
DT_DRV_COMPAT macro is matching with the compatible
property of device tree. It helps in device instanciation. 
*/
#define DT_DRV_COMPAT zephyr_toggle

#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
//#include <Toggledriver.h>

struct toggle_config {
	struct gpio_dt_spec led,button;
};

struct toggle_data {
};

/*int fetch(struct device *dev){
	int value;
	toggle	=	dev->config;	
	value	=	gpio_pin_get_dt(&toggle);
	return value;
}*/

static int toggle_init(const struct device *dev)
{
	/*const struct toggle_config *config = dev->config;

	if (!device_is_ready(config->led.port)) {
		printk("LED controller not ready");
		return -ENODEV;
	}

	if (!device_is_ready(config->button.port)) {
		printk("Button controller not ready");
		return -ENODEV;
	}*/

	return 0;
}
/*	.button	=	GPIO_DT_SPEC_INST_GET(inst, switch_gpios),		\
    .led	=	GPIO_DT_SPEC_INST_GET(inst, led_gpios),			\
\*/
#define TOGGLE_DEFINE(inst)                                       \
	static struct toggle_data toggle_data_##inst;			\
	static const struct toggle_config toggle_config_##inst = {        	\
	};                                                             	\
																	\
	DEVICE_DT_INST_DEFINE(inst, toggle_init, NULL, &toggle_data_##inst,   	      	\
			      &toggle_config_##inst, POST_KERNEL,          	   	\
			      NULL, NULL);

DT_INST_FOREACH_STATUS_OKAY(TOGGLE_DEFINE)
