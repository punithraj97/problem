cmd_/home/msis/dd/q10/ldd4-master/scull/Module.symvers := sed 's/ko$$/o/' /home/msis/dd/q10/ldd4-master/scull/modules.order | scripts/mod/modpost -m -a  -o /home/msis/dd/q10/ldd4-master/scull/Module.symvers -e -i Module.symvers   -T -