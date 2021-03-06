#include "config.h"

#if 0
const u8 PROTOCOL[] __attribute__((at(AIR_LIB_ADDR))) =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,		//品牌名
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,		//型号
	0x00,																																								//校验模式	0：CRC16	1：累加和
	0x01,																																								//CRC采用那种主机序	0：小端		1：大端
	0x00,0x01,0x01,0x03,0x01,																														//开关机，模式，温度，风速，扫风执行那一条命令，总5条
	//第一条命令
	0x03,0x01,0x0A,0x00,0x00,0x00,																											//帧头标志
	0x03,0x01,0x01,0x00,0x00,0x00,																											//空调地址
	0x03,0x01,0x03,0x00,0x00,0x00,																											//功能代码
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机起始地址
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机寄存器数量
	0x03,0x01,0x05,0x00,0x00,0x00,																											//数据大小
	0x03,0x01,0x00,0x00,0x01,0x01,																											//开关机数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,												//空调模式数据0:自动：
	0x00,0x01,																																					//温度数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x00,0x00,												//风速数据
	0x00,0x01,0x00,0x00,0x01,0x01,																											//扫风数据
	0x01,0x02,																																					//校验
	0x01,0x01,0x05,0x00,0x00,0x00,																											//结束标志
	0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,										//顺序
	//第二条命令
	0x03,0x01,0x0A,0x00,0x00,0x00,																											//帧头标志
	0x03,0x01,0x01,0x00,0x00,0x00,																											//空调地址
	0x03,0x01,0x03,0x00,0x00,0x00,																											//功能代码
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机起始地址
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机寄存器数量
	0x03,0x01,0x05,0x00,0x00,0x00,																											//数据大小
	0x00,0x01,0x00,0x00,0x01,0x01,																											//开关机数据
	0x03,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,												//空调模式数据
	0x03,0x01,																																					//温度数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x00,0x00,												//风速数据
	0x03,0x01,0x00,0x00,0x01,0x01,																											//扫风数据
	0x01,0x02,																																					//校验
	0x01,0x01,0x05,0x00,0x00,0x00,																											//结束标志
	0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,										//顺序
	//第三条命令
	0x03,0x01,0x0A,0x00,0x00,0x00,																											//帧头标志
	0x03,0x01,0x01,0x00,0x00,0x00,																											//空调地址
	0x03,0x01,0x03,0x00,0x00,0x00,																											//功能代码
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机起始地址
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机寄存器数量
	0x03,0x01,0x05,0x00,0x00,0x00,																											//数据大小
	0x00,0x01,0x00,0x00,0x01,0x01,																											//开关机数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,												//空调模式数据
	0x03,0x01,																																					//温度数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x00,0x00,												//风速数据
	0x00,0x01,0x00,0x00,0x01,0x01,																											//扫风数据
	0x01,0x02,																																					//校验
	0x01,0x01,0x05,0x00,0x00,0x00,																											//结束标志
	0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,										//顺序
	//第四条命令
	0x03,0x01,0x0A,0x00,0x00,0x00,																											//帧头标志
	0x03,0x01,0x01,0x00,0x00,0x00,																											//空调地址
	0x03,0x01,0x03,0x00,0x00,0x00,																											//功能代码
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机起始地址
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机寄存器数量
	0x03,0x01,0x05,0x00,0x00,0x00,																											//数据大小
	0x00,0x01,0x00,0x00,0x01,0x01,																											//开关机数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,												//空调模式数据
	0x00,0x01,																																					//温度数据
	0x03,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x00,0x00,												//风速数据
	0x00,0x01,0x00,0x00,0x01,0x01,																											//扫风数据
	0x01,0x02,																																					//校验
	0x01,0x01,0x05,0x00,0x00,0x00,																											//结束标志
	0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,										//顺序
	//第五条命令
	0x03,0x01,0x0A,0x00,0x00,0x00,																											//帧头标志
	0x03,0x01,0x01,0x00,0x00,0x00,																											//空调地址
	0x03,0x01,0x03,0x00,0x00,0x00,																											//功能代码
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机起始地址
	0x00,0x00,0x00,0x00,0x00,0x00,																											//室内机寄存器数量
	0x03,0x01,0x05,0x00,0x00,0x00,																											//数据大小
	0x00,0x01,0x00,0x00,0x01,0x01,																											//开关机数据
	0x00,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,												//空调模式数据
	0x00,0x01,																																					//温度数据
	0x03,0x01,0x00,0x00,0x01,0x01,0x02,0x02,0x03,0x03,0x00,0x00,												//风速数据
	0x00,0x01,0x00,0x00,0x01,0x01,																											//扫风数据
	0x01,0x02,																																					//校验
	0x01,0x01,0x05,0x00,0x00,0x00,																											//结束标志
	0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,										//顺序
};
#endif
