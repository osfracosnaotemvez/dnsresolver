#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {

	if(argc <= 1) {
		printf("DNS RESOLVER 1.0 \n");
		printf("by: TakeOverDLL \n");
		printf("Modo de uso -> ./dnsresolver www.google.com.br \n");

		return 0;
	}else {

	struct hostent *alvo = gethostbyname(argv[1]);

	if (alvo == NULL) {

	printf("Ocorreu um erro :( \n");

	} else {
	char *convertipv4 = inet_ntoa(*((struct in_addr *) alvo -> h_addr));

	printf("DNS: %s \n", argv[1]);
	printf("IP: %s\n", convertipv4);

	return 0;

	   }
	}
}
