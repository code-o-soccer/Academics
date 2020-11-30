#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>

const int MAX_SIZE = 100;

void error( char *msg ){
		perror( msg );
		exit(1);
}


int main(){
	int client_socket_fd, new_socket_fd, portno, clilen,port;

	scanf("%d", &port);
	
	struct sockaddr_in server_addr;

	bzero((char *)&server_addr, sizeof(server_addr));
	// creat socket with ip = local m/c , scoket type = tcp
	// and check if its created
	client_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if( client_socket_fd < 0){
		error ( " Socket creation failed ");
	}

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(port);
	server_addr.sin_addr.s_addr = INADDR_ANY;


	// connect to server
	if( connect (client_socket_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0 ){
		close(client_socket_fd);
		error ("Connection Failed");

	}

	char buffer[MAX_SIZE];
	char ackw[] ="DONE";
	int nbytes=0;
	
	// read and send file name to server
	scanf( "%s", buffer);
	// strcpy(buffer, "test.txt");
	size_t filelen = strlen(buffer)+1;
	send( client_socket_fd, buffer, sizeof(buffer), 0);
	int byte_rec,count=0;
	for (int i = 0; i < MAX_SIZE; i++) buffer[i] = '\0';
	recv(client_socket_fd, buffer, MAX_SIZE, 0);
	while (1 )
    {
    	
        // if(	strcmp(buffer, "END")==0) {printf("Successful transfer of %d files \n", count);close(client_socket_fd);return 0;}
        if(	strcmp(buffer, "password")==0) {
        	printf("new image recieved count :%d  \n", ++count);
        	send( client_socket_fd, ackw, sizeof(ackw), 0);

        }
        for (int i = 0; i < MAX_SIZE; i++) buffer[i] = '\0';
        // printf("oifya d\n");
        recv(client_socket_fd, buffer, MAX_SIZE, 0);
   		// printf("%s\n",buffer );
   		if(buffer[0]=='E' && buffer[1]=='N' && buffer[2]=='D' )
   		{
   			printf("Successful\n");
   			break;
   		}

    }

	// recv(client_socket_fd, buffer, MAX_SIZE, 0);

	// printf("%s\n",buffer );
 //    if(	strcmp(buffer, "END")==0) {printf("Successful transfer of %d files \n", count);close(client_socket_fd);return 0;}

	close(client_socket_fd);
}