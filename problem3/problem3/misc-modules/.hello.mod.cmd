cmd_/home/msis/dd/ldd4-master/misc-modules/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/msis/dd/ldd4-master/misc-modules/"$$0) }' > /home/msis/dd/ldd4-master/misc-modules/hello.mod
