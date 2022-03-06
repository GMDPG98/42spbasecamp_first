## Detailed description of Shell00 list

### Shell00 / ex00

In this exercise we need to create file that contains a 'Z' character on it and it should appear without any space and with one line break, the output should looks like this:

#### $ > cat z
#### Z
#### $>

### Shell00 / ex01

This exercise we would create a file and change it's permissions and datetime using chmod command, and should look the same as in the pdf.

After solved we should use the command:

#### tar -cf testShell00.tar testShell00

With this command you will compress the file with .tar extension.

#### Important

You should just execute this command after finish the exercise, because if you don't your work will be bigger, and your time probably will be lost.

### Shell00 / ex02

This exercise have the same principles as the other one, but here we will create many files and change it's permissions, datetime and so on.

After that we will use the command:

#### tar -cf exo2.tar *

This command as the other will compress the files.

### Shell00 / ex03

In this exercise we should create a file called midLS where we must put a command line that would list the files and directories in the actual directory, excepting hidden files, not even '.' or '..' files (nothing that starts with a dot). And we should list by access date, separate with comma and directories must have a slash before it's name.

### Shell00 / ex04

In the exercise 04 we should create a shell program called git_commit.sh, that would contain a command that would list the id from the five last commits from our repository.

### Shell00 / ex05

In this exercise we should create short shell script that would return a list of ignored files in our local git repository.

#### To test your script you should create a .gitignore file with some test files inside of it, and it should bring the files and show them.

### Shell00 / ex06

Here you should learn more about patch and diff commands, search more about it, then try to solve the exercise.

In this exercise you should use patch to separate the modified part from the original file that is inside the sw.diff file and output it in a file called 'b', just it.

### Shell00 / ex07

In this exercise we should put inside a file called clean, a command line that will search from the actual directory and inside all subdirectories, for files that start with '~' or start and finish with '#'.

- The command line should show and delete the encountered files.