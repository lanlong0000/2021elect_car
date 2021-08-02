/**
* @par Copyright (C): 2019-2028, Shenzhen Qinhe Intelligent Technology Co.,Ltd.
* @file         green_LED.c
* @author       George
* @version      V1.0
* @brief        运行指示灯实验
* @details
* @par History  见如下说明
*/
#include <Arduino.h>

//定义引脚
int LED_G = 9;  //LED_G接在arduino上的数字10口

/**
* Function       setup
* @author        George
* @brief         初始化配置
*/
void setup()
{
  //初始化RGB三色LED的IO口为输出方式
  pinMode(LED_G, OUTPUT);
}

/**
* Function       loop
* @author        George
*/
void loop()
{
    digitalWrite(LED_G, HIGH);
    delay(1000);
    digitalWrite(LED_G, LOW);
    delay(1000);
}
