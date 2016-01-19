        #include <stdio.h>
        #include <unistd.h>
        #include <sys/types.h>

        main()
        {
                int     fd[2];
                pid_t   childpid;

                pipe(fd);
        
                if((childpid = fork()) == -1)
                {
                        perror("fork");
                        exit(1);
                }
        }
