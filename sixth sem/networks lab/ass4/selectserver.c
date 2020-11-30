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
#include <sys/wait.h>
#include <netdb.h>

const int MAX_SIZE = 100;
const int MAXLINE = 100;

void error( char *msg ){
		perror( msg );
		exit(1);
}

int max(int a, int b){
	return (a>b)?a:b;
}

void main(){

	int udp_socket_fd,tcp_socket_fd, new_socket_fd, portno, clilen,port;

	printf("Enter Port:");scanf("%d", &port);
	
	struct sockaddr_in server_addr, client_addr;

	bzero((char *)&server_addr, sizeof(server_addr));
	bzero((char *)&client_addr, sizeof(client_addr));
	// creat socket with ip = local m/c , scoket type = tcp
	// and check if its created
	tcp_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if( tcp_socket_fd < 0){
		error ( " tcp Socket creation failed ");
	}

	


	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(port);
	server_addr.sin_addr.s_addr = INADDR_ANY;
	// bind socket to server address
	if( bind(
			tcp_socket_fd, 
			(struct sockaddr *)&server_addr, 
			sizeof(server_addr)) < 0
		){
		close(tcp_socket_fd);
		error( "tcp Binding failed");
		
	}
	listen ( tcp_socket_fd, 10); 
	
	printf( " Server Running....\n");
	udp_socket_fd = socket(AF_INET, SOCK_DGRAM, 0);
	if( udp_socket_fd < 0){
		error ( " udp Socket creation failed ");
	}
	if( bind(
			udp_socket_fd, 
			(struct sockaddr *)&server_addr, 
			sizeof(server_addr)) < 0
		){
		close(udp_socket_fd);
		error( "udp Binding failed");
		
	}

	// listen to max 5 clients
	

	clilen = sizeof(client_addr);

	fd_set fds;

	FD_ZERO(&fds);

	int maxfd;
	maxfd = max(tcp_socket_fd, udp_socket_fd) + 1;


	while(1){

		
		FD_SET(tcp_socket_fd, &fds);

		FD_SET(udp_socket_fd, &fds);
		printf("\n 4\n");
			
		int n_fd = select ( maxfd, &fds, NULL, NULL, NULL );
		if( FD_ISSET( tcp_socket_fd, &fds) )
		{

			int pid;
			clilen = sizeof(client_addr);
			char message[MAXLINE],buffer[MAXLINE];
			new_socket_fd = accept( tcp_socket_fd, (struct sockaddr*)&client_addr, &clilen);
			// close(tcp_socket_fd);
			printf("\n TCP SERVER RUNNING \n");
			if( (pid = fork()) == 0){
				close(tcp_socket_fd); 
    //             bzero(buffer, sizeof(buffer)); 
    //             printf("Message From TCP client: "); 
    //             read(new_socket_fd, buffer, sizeof(buffer)); 
    //             puts(buffer); 
    //             write(new_socket_fd, (const char*)message, sizeof(buffer)); 
    //             close(new_socket_fd);
    //             exit(0); 
            // }
           

			///////////////////////////////////////////////////// TCP Code ////////////////////////////////////////////////



				char buffer[MAX_SIZE];
				int nbytes;

				//recieve file name from server
				if( (nbytes = recv(new_socket_fd, buffer, MAX_SIZE, 0))<=0){
					close(tcp_socket_fd);
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
							close(tcp_socket_fd);
							error( "File open failed");
					} 

					// read until EOF or Error
					bzero(buffer, sizeof(buffer));
					// printf("1 \n");
					while( ( nbytes = read(file_fd, buffer, MAX_SIZE)) > 0 ){
						// printf("2 \n");
						// printf("%s \n",buffer);
					send( new_socket_fd, buffer, MAX_SIZE, 0); 	// send whole buffer
						// printf("3 \n");
						bzero(buffer, sizeof(buffer));
						// printf("4 \n");
					}
					printf("\nSENT : %s \n",file);
					char pwd[] = "password";
					send(new_socket_fd,pwd,sizeof(pwd),0);
					// if ( filecount--){
					// 	char end[] = "END";
					// 	// strcpy(buffer , "END");
					//     send(new_socket_fd,end,sizeof(end),0);
					//     printf("SENT : %s\n", end);
					// }
					recv(new_socket_fd, buffer, sizeof(buffer), 0);
				}

				char end[] = "END";
				// strcpy(buffer , "END");
			    send(new_socket_fd,end,sizeof(end),0);
			    printf("SENT : %s\n", end);
				// close(server_socket_fd);
				close(new_socket_fd);
				exit(0);
			}
				// close(file_fd);



			// ///////////////////////////////////////////////////// TCP Code ////////////////////////////////////////////////

			close(new_socket_fd);
		}

		

		if( FD_ISSET( udp_socket_fd, &fds) ){

			///////////////////////////////////////////////////// DNS Code ////////////////////////////////////////////////


		    printf("\n UDP Server Running....\n");
		  
		    int n; 
		    socklen_t len;
		    char buffer[MAXLINE]; 
		 
		    len = sizeof(client_addr);
		    n = recvfrom(udp_socket_fd, (char *)buffer, MAXLINE, 0, 
					( struct sockaddr *) &client_addr, &len);    // blocking call
		    buffer[n] = '\0'; 
		    printf("UDP recieved: %s\n", buffer); 
		    // printf("\n 1\n");
		    // struct hostent ip;
		    struct hostent *ip;
		    // printf("test2 \n");
		    ip = gethostbyname(buffer); 
		    // printf("\n 2\n");
		    // check if name is valid
		    if( ip == NULL){
		    	
		    	char err[] = "-1";

		    	sendto(udp_socket_fd, (const char *)err, strlen(err), 0, 
					(const struct sockaddr *) &client_addr, sizeof(client_addr)); 
		    	printf("INVALID HOSTNAME");
		    }
		    // printf("\n 5\n");
		    // printf("test3 	 \n");
		    int count = 0;

		    char *array;
		    
		    

		    // char *array = ip->h_addr;
		    // printf("sent IP : %s\n",array);


		    // printf("test1 \n");
		    do{
		    	if(!(ip->h_addr_list[count]))break;
		    	array = inet_ntoa(*((struct in_addr*) 
		                           ip->h_addr_list[count])); 
		    	if(!array)
		    		break;
		    	printf("sent IP %d : %s\n",++count,array);

		    	sendto(udp_socket_fd, (const char *)array, strlen(array), 0, 
					(const struct sockaddr *) &client_addr, sizeof(client_addr)); 

		    }while ( array != NULL); 
		    // printf("\n 3\n");
			///////////////////////////////////////////////////// DNS Code ////////////////////////////////////////////////

		}



	}


}