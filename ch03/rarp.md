# RARP

RARP是在数据链路层实现的,BOOTP某种意义上是RARP的升级版,DHCP可以看做是BOOTP的升级版,BOOTP和DHCP是在应用层实现.

在知道自己MAC地址情况下,请求IP地址进行通信,主要用于无盘工作站没有配置IP的又需要从其他地方读取OS启动等情况

RARP帧与ARP基本一致,协议类型 0x8035,操作为RARP请求(值为3)和RARP应答(值为4)
