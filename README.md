# 计算机网络

## [概述](ch01/README.md)

* [计算机网络体系结构](ch01/README.md#计算机网络体系结构) : 介绍计算机网络中常见的分层模型
  * OSI七层体系结构
  * 五层体系结构
  * TCP-IP体系结构
* [分层](ch01/README.md#分层)

并且且简介每层分别作用是什么.并且在后面的章节中,以TCP-IP体系结构分层详解每层的功能以及典型的应用.

## [链路层](ch02/README.md)

介绍典型的链路层

## [网络层](ch03/README.md)

介绍网络层主要的协议:IP 以及相关协议族,ARP 和 RAPR 其实属于 链路层和网络层之间用来转换的协议,并不单属于网络层

* [基本概念](ch03/README.md) : 虚电路和数据报以及路由器
* [IP](ch03/ip.md) : 网络层编址
* [ARP](ch03/arp.md) : 地址解析协议,即 **Address Resolution Protocol** 根据IP地址获取物理地址的一个协议
* [RARP](ch03/rarp.md) : 逆地址解析协议,功能和ARP协议相对,其将局域网中某个主机的物理地址转换为IP地址
* [ICMP](ch03/icmp.md) : Internet 控制报文协议
* [IGMP与多播](ch03/igmp.md) : Internet 组管理协议 以及多播 广播的概念
* [路由选择协议](ch03/route.md) :
  * RIP协议 ：贝尔曼福特算法,跳数作为路由的度量标准(*metric*),最大跳数15,如果大于15,它就会丢弃数据包
  * OSPF协议 ：Open Shortest Path First(开放式最短路径优先),迪杰斯特拉算法
  * IS-IS
  * BGP

## [运输层](ch04/README.md)

介绍数据如何传输,如何分包,如何保证数据完整

* [TCP](ch04/tcp.md)
* [UDP](ch04/udp.md)

## [应用层](ch05/README.md)

建立在上面介绍的底层基础上的具体应用.

* [HTTP](ch05/http.md)
* [FTP](ch05/ftp.md)
* [DNS](ch05/dns.md)