/*
 * config.h
 *
 *  Created on: 05.09.2013
 *      Author: alexs
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define DEBUG 0

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <syslog.h>
#include <sys/wait.h>
#include <signal.h>
#include <ctype.h>


extern char config_file[];
int find_config_param(char *, char *, int, int);

#endif /* CONFIG_H_ */