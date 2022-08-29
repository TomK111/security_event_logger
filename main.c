#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_security_events() {
    system("cd ../../../ && cat /var/log/auth.log");
    sleep(3);
    printf("\n");
};

void print_cron_jobs() {
    system("cd ../../../ && cat /var/log/syslog | grep \"CRON\" ");
    sleep(3);
    printf("\n");
};

void print_custom_syslogs() {
    system("cd ../../../ && cat /var/log/syslog | grep -v \"kernel\" ");
    sleep(3);
    printf("\n");
};

int main() {
    print_custom_syslogs();

    print_security_events();

    print_cron_jobs();

    return 0;

}