/******************************************************
*   FileName: main.cpp
*     Author: triones  2014-10-9
*Description:
*******************************************************/

#include "baseclient.h"
#include "comm/comlog.h"

int main()
{

	BaseClient base_client;
//	base_client.start("tcp:127.0.0.1:7406", 1);
	base_client.start("udp:127.0.0.1:7407", 1);

//	while (1)
//	{
		sleep(3);
//	}
	base_client.destroy();

	OUT_INFO(NULL, 0, NULL, "good luck");

	sleep(8);

	LOGSTOP();
}


