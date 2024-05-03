savedcmd_/home/msis/dd/problem2/scull/scull.mod := printf '%s\n'   main.o pipe.o access.o | awk '!x[$$0]++ { print("/home/msis/dd/problem2/scull/"$$0) }' > /home/msis/dd/problem2/scull/scull.mod
