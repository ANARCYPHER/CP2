//Program to get IP Address in C
// C program to print IP address 

#include <stdio.h> 

#include <stdlib.h> 

#include <unistd.h> 

#include <errno.h> 

#include <netdb.h> 

#include <sys/types.h> 

#include <sys/socket.h> 

#include <netinet/in.h> 

#include <arpa/inet.h> 

  

// Returns hostname for the local computer 

void hostnamechk(int hostname) 

{ 

     if (hostname == -1) 

     { 

         perror("gethostname"); 

         exit(1); 

     } 

} 

  

// getting host information of the host name 

void hostentrychk(struct hostent * hostentry) 

{ 

     if (hostentry == NULL) 

     { 

         perror("gethostbyname"); 

         exit(1); 

     } 

} 

  

// Converting space-delimited IPv4 address 

// to dotted-decimal format 

void ipbufferchk(char *IPbuffer) 

{ 

     if (NULL == IPbuffer) 

     { 

         perror("inet_ntoa"); 

         exit(1); 

     } 

} 

  

// Driver code 

int main() 

{ 

     char hostbuffer[256]; 

     char *IPbuffer; 

     struct hostent *host_entry; 

     int hostname; 

  

     hostname = gethostname(hostbuffer, sizeof(hostbuffer)); 

     hostnamechk(hostname); 

     // To get host information 

     host_entry = gethostbyname(hostbuffer); 

     hostentrychk(host_entry); 

  

     // Converting Internet network address to ASCII string 

     IPbuffer = inet_ntoa(*((struct in_addr*)host_entry->h_addr_list[0])); 

     printf("Host IP: %s", IPbuffer); 

     return 0; 

}
