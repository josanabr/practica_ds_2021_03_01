#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include "tcp.h"

int main(int argc, char* argv[]) 
{ 
	int sockfd, port; 
	char *host;
	char filename[BUFSIZ] = {0};

	if (argc != 3) {
		printf("Uso: %s <host> <puerto>\n",argv[0]);
		return 1;
	}
	host = argv[1];
	port = atoi(argv[2]);

	printf("Looking to connect at <%s,%d>\n",host,port);
	sockfd = TCP_Open(Get_IP(host),port);

	TCP_Read_String(sockfd,filename,BUFSIZ);
	printf("Archivo a recibir [%s]\n",filename);
	TCP_Write_String(sockfd,TCP_ACK);
	TCP_Recv_File(sockfd, filename);

	close(sockfd); 
} 

