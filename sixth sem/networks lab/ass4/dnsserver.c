// A Simple UDP Server that sends a HELLO message
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h> 
#include <netdb.h>
  
#define MAXLINE 1024 


void checkHostName(int hostname) 
{ 
    if (hostname == -1) 
    { 
        perror("gethostname"); 
        exit(1); 
    } 
}  

void error( char *msg ){
        herror( msg );
        exit(1);
}
  
int main() { 
    int sockfd; 
    struct sockaddr_in servaddr, cliaddr; 
    int port;
    scanf("%d", &port);
      
    // Create socket file descriptor 
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if ( sockfd < 0 ) { 
        perror("socket creation failed"); 
        exit(EXIT_FAILURE); 
    } 
      
    memset(&servaddr, 0, sizeof(servaddr)); 
    memset(&cliaddr, 0, sizeof(cliaddr)); 
      
    servaddr.sin_family    = AF_INET; //ipv4
    servaddr.sin_addr.s_addr = INADDR_ANY; 
    servaddr.sin_port = htons(port); 
      
    // Bind the socket with the server address 
    if ( bind(sockfd, (const struct sockaddr *)&servaddr,  
            sizeof(servaddr)) < 0 ) 
    { 
        perror("bind failed"); 
        exit(EXIT_FAILURE); 
    } 
    
    printf("\nServer Running....\n");
  
    int n; 
    socklen_t len;
    char buffer[MAXLINE]; 
 
    len = sizeof(cliaddr);
    n = recvfrom(sockfd, (char *)buffer, MAXLINE, 0, 
			( struct sockaddr *) &cliaddr, &len);    // blocking call
    buffer[n] = '\0'; 
    printf("%s\n", buffer); 

    // struct hostent ip;
    struct hostent *ip;
    printf("test2 \n");
    ip = gethostbyname(buffer); 
    // check if name is valid
    if( ip == NULL){
    	
    	char err[] = "-1";
    	sendto(sockfd, (const char *)err, strlen(err), 0, 
			(const struct sockaddr *) &cliaddr, sizeof(cliaddr)); 
    	error("INVALID HOSTNAME");
    }
    printf("test3 	 \n");
    int count = 0;

    char *array;
    

    // char *array = ip->h_addr;
    // printf("sent IP : %s\n",array);


    printf("test1 \n");
    do{
    	if(!(ip->h_addr_list[count]))break;
    	array = inet_ntoa(*((struct in_addr*) 
                           ip->h_addr_list[count])); 
    	if(!array)
    		break;
    	printf("sent IP %d : %s\n",++count,array);

    	sendto(sockfd, (const char *)array, strlen(array), 0, 
			(const struct sockaddr *) &cliaddr, sizeof(cliaddr)); 

    }while ( array != NULL);


   //  	sendto(sockfd, (const char *)(array), strlen((array)), 0, 
			// (const struct sockaddr *) &cliaddr, sizeof(cliaddr)); 
  
   //  printf("test4 %d\n",count);
   //  char buff[MAXLINE] = "&";
   //  sendto(sockfd, (const char *)(buff), strlen(buff), 0, 
			// (const struct sockaddr *) &cliaddr, sizeof(cliaddr)); 
      
    return 0; 
} 
