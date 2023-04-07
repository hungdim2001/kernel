obj-m = hello.o

KVERSION = $(shell uname -r)

all:
		make -C /lib/mudules/$(KVERSION)/build M=$(PWD) modules

clean:
		make -C /lib/mudules/$(KVERSION)/build M=$(PWD) clean