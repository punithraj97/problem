cmd_/home/msis/dd/q8/scull/Module.symvers := sed 's/ko$$/o/' /home/msis/dd/q8/scull/modules.order | scripts/mod/modpost -m -a  -o /home/msis/dd/q8/scull/Module.symvers -e -i Module.symvers   -T -
