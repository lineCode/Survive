#ifndef _NETCMD_H
#define _NETCMD_H

#define ERROR_STATUS_SUCCESS     0
#define ERROR_STATUS_UNKNOWN     1
#define ERROR_STATUS_LOGIN_PASSWORD 10
#define ERROR_STATUS_LOGIN_RELOGIN 11
#define ERROR_STATUS_LOGIN_NOROLE 12
#define ERROR_STATUS_LOGIN_NO_RECONNECT 13
#define ERROR_STATUS_CREATE_ROLE_MALLOC 21
#define ERROR_STATUS_CREATE_ROLE_FAIL 22
#define ERROR_STATUS_CREATE_ROLE_RENAME 23
#define ERROR_STATUS_CREATE_ROLE_DB 24
#define ERROR_STATUS_CREATE_ROLE_NAME_LEN 25


enum{
	CSID_PING_REQ            = 1000,
	SSID_CONNECTSERVER_RPT   = 1001,
	SSID_SERVERSTOP_PREPARE  = 1002,
	SSID_SERVERSTOP_FINAL    = 1003,
	GDID_USER_INFO_REQ       = 1004,
	DGID_USER_INFO_ACK       = 1005,
	DGID_NO_USER_ACK         = 1006,
	GDID_CREATE_ROLE_REQ     = 1007,
	DGID_CREATE_ROLE_ACK     = 1008,
	GDID_UPDATE_USER_INFO_REQ = 1009,		
	CSID_LOGIN_REQ           = 1010,
	CSID_CREATE_ROLE_REQ     = 1011,
	CSID_RECONNECT_REQ       = 1012,
	SCID_PING_ACK            = 1500,
	SCID_LOGIN_ACK           = 1511,
	SCID_CREATE_ROLE_ACK     = 1512,
	SCID_ROLE_INFO_ACK       = 1513,
	SCID_RECONNECT_ACK       = 1514,	
	CSID_ENTERMAP_REQ        = 2101,
	CSID_MAP_INFO            = 2102,
	CSID_ENTERMAP_ACK        = 2103,
	CSID_MOVETEST_REQ        = 2104,
	CSID_MAPPOINT_INFO       = 2105,
	CSID_MOVETEST_ACK        = 2106,
	CSID_ENTERFIGHT_REQ      = 2107,
	CSID_FIGHT_FRAME_DATA    = 2108,
	CSID_ENTERFIGHT_ACK      = 2109,
	CSID_PREFIGHT_REQ        = 2110,
	CSID_PREFIGHT_INFO       = 2111,
	CSID_PREFIGHT_ACK        = 2112,
	CSID_MAPREWARD_REQ       = 2113,
	CSID_MAPREWARD_INFO      = 2114,
	CSID_MAPREWARD_ACK       = 2115,
	CSID_FIGHT_RESULT        = 2116,
	CSID_MAP_REWARD          = 2117,
	CSID_MAPFINISHED_REQ     = 2118,
	

};
#endif