/* TCP server program */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <dirent.h>

const int MAX_SIZE = 100;

void error( char *msg ){
		perror( msg );
		exit(1);
}




void main(){
	int server_socket_fd, new_socket_fd, portno, clilen,port,i;

	scanf("%d", &port);
	
	struct sockaddr_in server_addr, client_addr;

	bzero((char *)&server_addr, sizeof(server_addr));
	bzero((char *)&client_addr, sizeof(client_addr));
	// creat socket with ip = local m/c , scoket type = tcp
	// and check if its created
	server_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if( server_socket_fd < 0){
		error ( " Socket creation failed ");
	}


	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(port);
	server_addr.sin_addr.s_addr = INADDR_ANY;
	// bind socket to server address
	if( bind(
			server_socket_fd, 
			(struct sockaddr *)&server_addr, 
			sizeof(server_addr)) < 0
		){
		close(server_socket_fd);
		error( "Binding failed");
		
	}

	printf( " Server Running....\n");
	// listen to max 5 clients
	listen ( server_socket_fd, 5); 

	clilen = sizeof(client_addr);
	// accept connection from client, 
	// saves clilen , client address in respective
	// structures 
	// NOTE : don't use COnst in accept parameters	
	if ( (new_socket_fd = accept( server_socket_fd, (struct sockaddr *)&client_addr, &clilen ) ) < 0 ){
		close(server_socket_fd);
		error ( "Accept Failure" );

	}


	char buffer[MAX_SIZE];
	int nbytes;

	//recieve file name from server
	if( (nbytes = recv(new_socket_fd, buffer, MAX_SIZE, 0))<=0){
		close(server_socket_fd);
		close(new_socket_fd);
		error(" Invalid Directory Name recieved");
	}

	//nbytes = recieve_all(new_socket_fd, buffer);

	buffer[nbytes] = '\0';
	// printf("recv.len = %d, len = %d, buffer[] = %s \n",nbytes,strlen(buffer),buffer);

	struct dirent *de;

	DIR *dr = opendir(buffer);
	// check for errors in opening directory
	if ( dr == NULL){
		error("FAILED TO OPEN THE Directory");
	}

	char file[MAX_SIZE];

	char direc[MAX_SIZE] ;
	strcpy(direc, buffer);
	strcat(direc,"/");

	while (( de = readdir(dr))){
		strcpy( file, direc);
		// strcat( file, "/");
		strcat( file, de->d_name);
		// strcpy( , de->d_name) ;
		if( de->d_name[0] == '.')continue;
		// printf("%s\n", file );

		int file_fd;
		if( ( file_fd = open(file,O_RDONLY, 0)) < 0){
				close(new_socket_fd);
				close(server_socket_fd);
				error( "File open failed");
		} 

		// read until EOF or Error
		// bzero(buffer, sizeof(buffer));
		for(i=0;i<MAX_SIZE;i++)
				buffer[i] = '\0';
		// printf("1 \n");
		while( ( nbytes = read(file_fd, buffer, sizeof(buffer))) >0 ){
			// printf("2 \n");
			// printf("%s \n",buffer);
			send( new_socket_fd, buffer, sizeof(buffer), 0); 	// send whole buffer
			// printf("3 \n");
			// bzero(buffer, sizeof(buffer));
			for(i=0;i<MAX_SIZE;i++)
				buffer[i] = '\0';
			// printf("4 \n");
		}
		printf("SENT : %s \n",file);
		char d[] = "password";
		send(new_socket_fd,d,sizeof(d),0);
	}
	char c[] ="END";
    send(new_socket_fd,c,sizeof(c),0);
	// close(server_socket_fd);
	// close(new_socket_fd);
	// close(file_fd);


}