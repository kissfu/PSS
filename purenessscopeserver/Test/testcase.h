#ifndef _TESTCASE_H
#define _TESTCASE_H

#include "commons.h"
#include "pthread.h"

//测试单个数据包收发情况
bool CheckTcpPacket(_ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

//测试多个数据包收发情况
bool CheckMultipleTcpPacket(int nCount, _ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

//测试多个连接收发包情况
bool CheckMultipleTcpConnect(int nCount, _ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

//测试非法数据包头的问题
bool CheckTcpErrorPacketHead(_ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

//测试数据粘包
bool CheckTcpHalfPacket(_ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

//多线程测试连接
void* Thread_CheckTcpPacket();

//测试多线程并发
bool CheckTcpMulipleThreadPacket(int nCount, _ClientInfo& objClientInfo, _ResultInfo& objResultInfo);

#endif
