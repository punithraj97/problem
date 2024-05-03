cmd_/home/msis/dd/q8/scull/modules.order := {   echo /home/msis/dd/q8/scull/scull.ko; :; } | awk '!x[$$0]++' - > /home/msis/dd/q8/scull/modules.order
