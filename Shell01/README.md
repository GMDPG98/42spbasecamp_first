## Detailed description

### Shell01 / ex01

On exercise print_groups.sh we should write a command line that would determine and show the groups list in which the specified login in environment variable FT_USER is member of.

- Separated by comma and without spaces.

### Shell01 / ex02

Here we should write a command line that would search all files that contains '.sh' extension in actual directory and in all subdirectories, and that will show just the file's name's without the .sh extension.

### Shell01 / ex03

In count_files.sh exercise we must write a command line that will search in actual directory and in all subdirectories, for regular files including the '.' (hidden files) and count the total amount of files showing the result.

- Output example:

#### $ ./count_files.sh | cat -e
#### 42$
#### $

### Shell01 / ex04

Write a command line that should show the MAC address from your machine in the same format as listed below:

#### >$ ./MAC.sh | cat -e
#### f2:5b:44:60:f5:aa txqueuelen 1000 (Ethernet)$
#### 8a:ec:c7:ac:30:81 txqueuelen 1000 (Ethernet)$
#### ca:17:6b:da:36:fc txqueuelen 1000 (Ethernet)$
#### 02:42:0a:02:03:0a txqueuelen 0 (Ethernet)$

### Shell01 / ex05

Here we should create a file with 42 value inside of it and nothing more. Wait just it?? Seriously?. No my dear grasshopper, the challenge here is present in the title of the file that you should create. And what it is?.

- Just it, you should name your file: "\?$*'MaRViN'*$?\"

- You can test it this way, and the output should be the same as the listed below:

#### $ ls -lRa *MaRV* | cat -e
#### -rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
#### $

### Shell01 / ex06

On exercise skip.sh we should create a command line that will show a ls -l line yes line not, starting from the first line.