#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <fcntl.h>  // for open
#include <unistd.h> // for close

#define SERVER_PORT 8888
#define BUFF_LEN 512
#define SERVER_IP "127.0.0.1"

void udp_msg_sender(int fd, struct sockaddr *dst)
{

  socklen_t len;
  struct sockaddr_in src;
  int count;
  while (1)
  {
    char buf[BUFF_LEN] = "TEST UDP MSG!\n";
    printf("please input a string : ");
    gets(buf);
    len = sizeof(*dst);
    sendto(fd, buf, BUFF_LEN, 0, dst, len);
    memset(buf, 0, BUFF_LEN);
    recvfrom(fd, buf, BUFF_LEN, 0, (struct sockaddr *)&src, &len); //接收来自server的信息
    if (count == -1)
    {
      printf("recieve data fail!\n");
    }
    else
    {
      printf("recieve from server : %s\n", buf);
    }
  }
}

/*
     client:
             socket-->sendto-->revcfrom-->close
 */

int main(int argc, char *argv[])
{
  int client_fd;
  struct sockaddr_in ser_addr;

  client_fd = socket(AF_INET, SOCK_DGRAM, 0);
  if (client_fd < 0)
  {
    printf("create socket fail!\n");
    return -1;
  }

  memset(&ser_addr, 0, sizeof(ser_addr));
  ser_addr.sin_family = AF_INET;
  //ser_addr.sin_addr.s_addr = inet_addr(SERVER_IP);
  ser_addr.sin_addr.s_addr = htonl(INADDR_ANY); //注意网络序转换
  ser_addr.sin_port = htons(SERVER_PORT);       //注意网络序转换

  udp_msg_sender(client_fd, (struct sockaddr *)&ser_addr);

  close(client_fd);

  return 0;
}