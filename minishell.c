#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <ctype.h>

int main()
{
    while(1)
    {
        printf("[username@localhost]$ ");
        fflush(stdout);
        char cmd_buf[1024] = { 0 };
        fgets(cmd_buf,1023,stdin);//从标准输入读取信息
        cmd_buf[strlen(cmd_buf) - 1] = '\0';
        printf("cmd:[%s]\n",cmd_buf);
        
        //ls -l >> a.txt
        char * ptr = cmd_buf;
        char * filename = NULL;
        int redirect_flag = 0;
        while(*ptr != '\0')
        {
            if(*ptr == '>')
            {
                *ptr = '\0';
                redirect_flag++;
                ptr++;
                if(*(ptr) == '>')
                {
                    redirect_flag++;
                    ptr++;

                }
                while(isspace(*ptr) && *ptr != '\0') ptr++;
                filename = ptr;
                while(!isspace(*ptr) && *ptr != '\0') ptr++;
                *ptr = '\0';
                continue;

            }
            ptr++;
        }


        char * argv[32] = {NULL};
        int argc = 0;
        ptr = cmd_buf;
        while(*ptr != '\0')
        {
            if(!isspace(*ptr))
            {
                argv[argc] = ptr;
                argc++;
                while(!isspace(*ptr) && *ptr != '\0') ptr++;
                *ptr = '\0';
            }
            ptr++;
        }
        argv[argc] = NULL;
        int i;
        for(i = 0;i < argc;i++)
        {
            printf("argv[%d] = %s\n",argc,argv[argc]);
        }
    //第二步
    pid_t pid = fork();
    if(pid < 0)
    {
        continue;
    }
    else if(pid == 0)
    {
        execvp(argv[0],argv);
        //若程序替换失败，因子父进程的一致，则会出现两个shell，因此使用exit终止该进程。
        exit(0);
    }//第三步
    wait(NULL);//第四步

    return 0;

    }
}
