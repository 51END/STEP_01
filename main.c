/******************************************************************************/
/*                           叁议电子                                         */
/*                        www.ppptalk.com                                     */
// 版本：      51END
// 文件名：    main.c
// 说明：      DebugLed闪烁实验
// 编写日期：  2017年11月27日
// qq交流群：  677878048
// 网址：      www.ppptalk.com
// 淘宝店地址：https://shop115025335.taobao.com
// 在线视频：  https://space.bilibili.com/253153822/#/channel/detail?cid=37504
// 视频下载:   链接：https://pan.baidu.com/s/1DqXNUDjyAKiApw-aAji8Ug 密码：lezb
// 免责声明：  该程序仅用于学习与交流
// (c) PPPTalk  All Rights Reserved
/******************************************************************************/


/******************************************************************************/
// 包含头文件
/******************************************************************************/
#include "config.h"
#include "debugLed.h"
#include "delay.h"


/******************************************************************************/
// main函数 
/******************************************************************************/
int main(void){
	debugLedOn();
	while(1);
//	while(1){
//		debugLedOn();
//		Delay200ms();
//		debugLedOff();
//		Delay200ms();
//	}
}