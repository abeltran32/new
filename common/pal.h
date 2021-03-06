#ifndef _pal_H
#define _pal_H

// USB
void pal_usb_handler(uint8_t *rx_buff, int rx_len);

// IPMI
bool pal_is_to_ipmi_handler(uint8_t netfn, uint8_t cmd);
bool pal_is_not_return_cmd(uint8_t netfn, uint8_t cmd);

// init
void pal_I2C_init(void);
void pal_BIC_init(void);
bool pal_load_IPMB_config(void);

// sensor
void pal_set_sensor_poll_interval(int *interval_ms);

// sensor accessible
uint8_t pal_load_sdr_table(void);
bool pal_load_snr_config(void);

// fru
void pal_load_fru_config(void);

// sensor read
bool pal_tmp75_read(uint8_t sensor_num, int *reading);
bool pal_adc_read(uint8_t sensor_num, int *reading);
bool pal_peci_read(uint8_t sensor_num, int *reading);
bool pal_vr_read(uint8_t sensor_num, int *reading);
bool pal_pch_read(uint8_t sensor_num, int *reading);
bool pal_hsc_read(uint8_t sensor_num, int *reading);

// gpio
bool pal_load_gpio_config(void);
void gpio_AD_callback_handler(uint32_t pins);
void gpio_EH_callback_handler(uint32_t pins);
void gpio_IL_callback_handler(uint32_t pins);
void gpio_MP_callback_handler(uint32_t pins);
void gpio_QT_callback_handler(uint32_t pins);
void gpio_UV_callback_handler(uint32_t pins);
#endif
