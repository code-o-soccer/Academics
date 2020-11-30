#include <stdio.h> 
#include <string.h>
#include <arpa/inet.h>
 
#include "rsocket.h"

#define MAXLINE 100 
#define ROLLNO 10012

struct sockaddr_in addr,addr2; 
socklen_t len; 
char buffer[MAXLINE] ;

int main(int argc,  char **argv ) 
{ 
    int sockfd = r_socket(AF_INET, SOCK_MRP, 0);
    if ( sockfd < 0 ) 
    { 
        perror("socket creation failed"); 
    } 
    else
    {
        memset(&addr2, 0, sizeof(addr2)); 
        addr2.sin_addr.s_addr = INADDR_ANY; 
        addr2.sin_family = AF_INET;
        addr2.sin_port = htons(3000+2*ROLLNO+1);
       
        if (r_bind(sockfd, (const struct sockaddr *)&addr2, sizeof(addr2)) < 0 ) 
        { 
            perror("bind failed"); 
            r_close(sockfd);
            exit(EXIT_FAILURE); 
        }
        scanf("%s",buffer);
        memset(&addr, 0, sizeof(addr)); 
        addr.sin_addr.s_addr = INADDR_ANY; 
        addr.sin_family = AF_INET; 
        addr.sin_port = htons(3000+2*ROLLNO); 
        
        for(int i = 0;i<strlen(buffer);i++)
        {  
            len = sizeof(addr);
            int t = r_sendto(sockfd, (const char *)(buffer+i), 1, MSG_DONTWAIT,(const struct sockaddr *) &addr, len);
        }
        r_close(sockfd); 
    }
    return 0; 
} 
