savedcmd_/home/msis/dd/problem1/scull/scull.mod := printf '%s\n'   main.o pipe.o access.o | awk '!x[$$0]++ { print("/home/msis/dd/problem1/scull/"$$0) }' > /home/msis/dd/problem1/scull/scull.mod
