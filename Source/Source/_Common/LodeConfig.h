#pragma once
//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

/*
 -> This project is now EOL, for new bases and releases be sure to visit: https://lodelight.com
*/

#define	NEUZ_TITLE	"[VS22] Lodelight V17"         		//: Window title of the client.
#define	NEUZ_BHASH	"sunkist"							//: String to boot the client.
#define	NEUZ_IPSET	"127.0.0.1"							//: Ip of the server, must match AccountServer.ini & LoginServer.ini.
#define	NEUZ_CPORT	"5400"								//: Cache port, must match CacheServer.ini.
#define	NEUZ_PHASH	"kikugalanet"						//: Md5 password salt.
#define	NEUZ_MSGVR	"20100412"							//: Ver of the server, must match AccountServer.ini & LoginServer.ini.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define	__FIX_STAT_BUFF									//: Fixes some issues present with the v19 spec_item.
#define __SLEEPING_FIX									//: Fixes the stun/sleeping bug present with Echoes of Weary.
#define __SYS_SCR_CANCELLATION							//: Scroll of Unbinding.
#define __TREASUREBOX									//: Retail like treasure box system.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

enum { ENCHANT_TIME = 1 };								//: Adjust the time of upgrading.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-