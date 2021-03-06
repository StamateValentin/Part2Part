#pragma once

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <netdb.h>
#include <netinet/in.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

#include <pthread.h>

#define MAX_NOTIF 50

#include "user_commands.h"
#include "client/client_functions.h"
#include "ANSI-color-codes.h"
#include "models.h"
#include "configuration.h"
#include "errors.h"
#include "utility.h"

