#include "../core.h"

const LibFunc chapter8[] = {
    {"system_call_example",
     "Demonstrates calling system command.",
     "Uses system() to list directory contents.",
     NULL,
     0,
     "#include <stdlib.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    system(\"ls -l\");\n"
     "    return 0;\n"
     "}\n"},
    {"open_read_write_close",
     "Demonstrates low-level file operations.",
     "Uses open, read, write, and close system calls.",
     NULL,
     0,
     "#include <fcntl.h>\n"
     "#include <unistd.h>\n"
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    char buf[128];\n"
     "    int fd = open(\"chapter8.txt\", O_RDONLY);\n"
     "    if (fd < 0)\n"
     "    {\n"
     "        perror(\"open\");\n"
     "        return 1;\n"
     "    }\n"
     "    int bytes = read(fd, buf, sizeof(buf) - 1);\n"
     "    if (bytes < 0)\n"
     "    {\n"
     "        perror(\"read\");\n"
     "        return 1;\n"
     "    }\n"
     "    buf[bytes] = '\\0';\n"
     "    write(1, buf, bytes);\n"
     "    close(fd);\n"
     "    return 0;\n"
     "}\n"},
    {"getpid_getppid",
     "Demonstrates getpid and getppid.",
     "Prints current and parent process IDs.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <unistd.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"PID: %d\\n\", getpid());\n"
     "    printf(\"PPID: %d\\n\", getppid());\n"
     "    return 0;\n"
     "}\n"},
    {"fork_and_wait",
     "Demonstrates fork and wait.",
     "Creates a child process and waits for it to finish.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <unistd.h>\n"
     "#include <sys/wait.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    pid_t pid = fork();\n"
     "    if (pid < 0)\n"
     "    {\n"
     "        perror(\"fork\");\n"
     "        return 1;\n"
     "    }\n"
     "    if (pid == 0)\n"
     "    {\n"
     "        printf(\"Child process\\n\");\n"
     "    }\n"
     "    else\n"
     "    {\n"
     "        wait(NULL);\n"
     "        printf(\"Parent process\\n\");\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"exec_example",
     "Demonstrates exec to run external program.",
     "Uses execlp to replace process image with 'ls'.",
     NULL,
     0,
     "#include <unistd.h>\n"
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"Running ls using exec...\\n\");\n"
     "    execlp(\"ls\", \"ls\", \"-l\", NULL);\n"
     "    perror(\"exec failed\");\n"
     "    return 1;\n"
     "}\n"},
    {"signal_example",
     "Demonstrates signal handling.",
     "Sets a signal handler for SIGINT (Ctrl+C).",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <signal.h>\n"
     "#include <unistd.h>\n"
     "\n"
     "void handle_sigint(int sig)\n"
     "{\n"
     "    printf(\"Caught signal %d\\n\", sig);\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    signal(SIGINT, handle_sigint);\n"
     "    while (1)\n"
     "    {\n"
     "        printf(\"Running... Press Ctrl+C to trigger SIGINT\\n\");\n"
     "        sleep(2);\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"alarm_pause_example",
     "Demonstrates alarm and pause.",
     "Schedules an alarm and waits using pause.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <signal.h>\n"
     "#include <unistd.h>\n"
     "\n"
     "void handle_alarm(int sig)\n"
     "{\n"
     "    printf(\"Alarm signal received: %d\\n\", sig);\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    signal(SIGALRM, handle_alarm);\n"
     "    alarm(3);\n"
     "    printf(\"Waiting for alarm...\\n\");\n"
     "    pause();\n"
     "    return 0;\n"
     "}\n"},
    {"kill_example",
     "Demonstrates sending signals with kill.",
     "Sends SIGTERM to a child process.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <unistd.h>\n"
     "#include <signal.h>\n"
     "#include <sys/wait.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    pid_t pid = fork();\n"
     "    if (pid < 0)\n"
     "    {\n"
     "        perror(\"fork\");\n"
     "        return 1;\n"
     "    }\n"
     "    if (pid == 0)\n"
     "    {\n"
     "        while (1)\n"
     "        {\n"
     "            printf(\"Child running...\\n\");\n"
     "            sleep(1);\n"
     "        }\n"
     "    }\n"
     "    else\n"
     "    {\n"
     "        sleep(3);\n"
     "        kill(pid, SIGTERM);\n"
     "        wait(NULL);\n"
     "        printf(\"Child terminated\\n\");\n"
     "    }\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter8_functions_count(void)
{
    return sizeof(chapter8) / sizeof(LibFunc);
}
