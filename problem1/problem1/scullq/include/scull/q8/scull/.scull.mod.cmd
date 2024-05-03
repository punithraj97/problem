cmd_/home/msis/dd/q8/scull/scull.mod := printf '%s\n'   main.o pipe.o access.o | awk '!x[$$0]++ { print("/home/msis/dd/q8/scull/"$$0) }' > /home/msis/dd/q8/scull/scull.mod
