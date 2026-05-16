#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

//WIFEXITED();
//WEXITSTATUS();
//WIFSIGNALED();
//WTERMSIG();

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

// Signal handler function
int	main(){
	pid_t pid = fork();

	if (pid == 0){
		while (1);
	} else if (pid > 0){
		alarm(10);
		kill(pid, SIGALRM);
		int status;
		pid_t cpid = wait(&status);
		if (cpid == pid){ alarm(0); }
		else kill(pid, SIGALRM);
		std::cout << "EXIT bu signal: " << WIFSIGNALED(status) << std::endl;
		std::cout << "number signal kill child: " << WTERMSIG(status) << std::endl;
	}
	std::cout << "All child process finished and parent is ready to finish alsoo;)" << std::endl;
	return 0;
}
