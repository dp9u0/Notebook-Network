# 计算机网络

## [概述](ch01/README.md)

* OSI七层体系结构
* 五层体系结构
* TCP-IP体系结构

## [链路层](ch02/README.md)

* 以太网 令牌环 光纤分布式数据接口(FDDI)
* 串口标准 EIA-232、EIA-422和EIA-485

## [网络层](ch03/README.md)

* [IP](ch03/ip.md)
* [ARP](ch03/arp.md) : 地址解析协议，即 Address Resolution Protocol 根据IP地址获取物理地址的一个协议
* [RARP](ch03/rarp.md) : 逆地址解析协议，功能和ARP协议相对，其将局域网中某个主机的物理地址转换为IP地址
* [ICMP](ch03/icmp.md) : Internet 控制报文协议
* [IGMP](ch03/igmp.md) : Internet 组管理协议
* [路由选择协议](ch03/route.md) :
  * RIP协议 ：贝尔曼福特算法,跳数作为路由的度量标准(metric),最大跳数15,如果大于15,它就会丢弃数据包
  * OSPF协议 ：Open Shortest Path First(开放式最短路径优先),迪杰斯特拉算法

## [运输层](ch04/README.md)

* [TCP](ch04/tcp.md)
* [UDP](ch04/udp.md)

## [应用层](ch05/README.md)

* [HTTP](ch05/http.md)
* [HTTPS](ch05/https.md)
* [FTP](ch05/ftp.md)
* [DNS](ch05/dns.md)