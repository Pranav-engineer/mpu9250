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



#ifndef MPU_HPP
#define MPU_HPP

#include <driver/gpio.h>
#include <driver/i2c.h>

#include "registerMap.hpp"

#define DEFAULT_SDA_NUM GPIO_NUM_33
#define DEFAULT_SCL_NUM GPIO_NUM_32



class mpu {

public:

    mpu(uint16_t address = MPU9250_ADDRESS, gpio_num_t sdaNum = DEFAULT_SDA_NUM, gpio_num_t sclNum = DEFAULT_SCL_NUM);


private:


};  
#endif //  MPU_HPP