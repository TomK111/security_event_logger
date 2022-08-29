#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_security_events() {
    system("cd ../../../");
    system("sudo cat /var/log/auth.log >> security_logs.txt");
};

void print_cron_jobs() {
    system("cd ../../../");
    system("sudo cat var/log/syslog | grep \"CRON\" >> cron_logs.txt");
};

void print_custom_syslogs() {
    system("cd ../../../");
    system("sudo cat /var/log/syslog | grep -v \"kernel\" >> custom_syslogs.txt");
};


int main() {
        print_security_events();
        print_cron_jobs();
        print_custom_syslogs();
}
