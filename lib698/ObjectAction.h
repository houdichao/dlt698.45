/*
 * ObjectAction.h
 *
 *  Created on: Nov 12, 2016
 *      Author: ava
 */

#ifndef OBJECTACTION_H_
#define OBJECTACTION_H_
//#include "AccessFun.h"
#include "StdDataType.h"
int doObjectAction();

#pragma pack(1)				//结构体一个字节对其
typedef struct
{
	TSA addr;			//通信地址
	INT8U baud;			//波特率
	INT8U protocol;		//规约类型
	OAD port;			//端口
	INT8U pwd[OCTET_STRING_LEN];	//通信密码
	INT8U ratenum;		//费率个数
	INT8U usrtype;		//用户类型
	INT8U connectype;	//接线方式
	INT16U ratedU;		//额定电压
	INT16U ratedI;		//额定电流
}BASIC_OBJECT;
typedef struct
{
	TSA cjq_addr;		//采集器地址
	INT8U asset_code[OCTET_STRING_LEN];		//资产号
	INT16U pt;
	INT16U ct;
}EXTEND_OBJECT;
typedef struct
{
	OAD oad;
	INT8U data[OCTET_STRING_LEN];
}ANNEX_OBJECT;

typedef struct
{
	INT8U name[OCTET_STRING_LEN];		//参数变量接口类逻辑名
	INT16U sernum;						//配置序号
	BASIC_OBJECT basicinfo;				//基本信息
	EXTEND_OBJECT extinfo;				//扩展信息
	ANNEX_OBJECT aninfo;				//附属信息
}CLASS_6001;//采集档案配置表对象


#endif /* OBJECTACTION_H_ */
