//    mpu9250 - mpu9250 driver for esp32
//    Copyright (C) 2023 akshay bansod <akshayb@gmx.com>
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <https://www.gnu.org/licenses/>.



#include "mpu.hpp"

#define MPU_DEFAULT_PORT I2C_NUM_0
#define MPU_FREQUENCY (100 * 1000)

mpu::mpu( uint16_t address, gpio_num_t sdaNum , gpio_num_t sclNum){

    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = sdaNum,         // select GPIO specific to your project
        .scl_io_num = sclNum,         // select GPIO specific to your project
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master = {.clk_speed = MPU_FREQUENCY },  // select frequency specific to your project
        .clk_flags = 0,                          // you can use I2C_SCLK_SRC_FLAG_* flags to choose i2c source clock here
    };

    i2c_param_config(MPU_DEFAULT_PORT, &conf);
    i2c_driver_install(MPU_DEFAULT_PORT, I2C_MODE_MASTER, 0, 0, 0);

};



