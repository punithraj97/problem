savedcmd_/home/msis/lab_exam/ldd4-master/scull/scull.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /home/msis/lab_exam/ldd4-master/scull/scull.ko /home/msis/lab_exam/ldd4-master/scull/scull.o /home/msis/lab_exam/ldd4-master/scull/scull.mod.o;  make -f ./arch/x86/Makefile.postlink /home/msis/lab_exam/ldd4-master/scull/scull.ko