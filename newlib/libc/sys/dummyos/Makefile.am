AUTOMAKE_OPTIONS = cygnus

INCLUDES = $(NEWLIB_CFLAGS) $(CROSS_CFLAGS) $(TARGET_CFLAGS) $(INCLTDL)

SUBDIRS = machine

SUBLIBS = $(DUMMYOS_MACH_LIB)

SOURCES = dup.c \
		  exec.c \
		  exit.c \
		  fork.c \
		  fs.c \
		  io.c \
		  ioctl.c \
		  nanosleep.c \
		  pipe.c \
		  sbrk.c \
		  signal.c \
		  stat.c \
		  sys.c \
		  termios.c \
		  tty.c \
		  wait.c

ADD_OBJS =

noinst_LIBRARIES = lib.a
lib_a_SOURCES = $(SOURCES)
lib_a_LIBADD = $(ADD_OBJS)
lib_a_DEPENDENCIES = $(ADD_OBJS)
lib_a_CFLAGS = $(AM_CFLAGS)
LIBC_COMPILE = $(COMPILE)
noinst_DATA =

lib.a: $(lib_a_OBJECTS)
	rm -f $@
	rm -rf tmp
	mkdir tmp
	cd tmp; \
	for i in $(SUBLIBS); do \
	  $(AR) x ../$$i; \
	done;
	$(AR) $(AR_FLAGS) $@ tmp/*.o  $^
	$(RANLIB) $@
	rm -rf tmp

all-local: crt0.o

crt0.o: machine/crt0.o
	rm -f $@
	ln machine/crt0.o $@ >/dev/null 2>/dev/null || cp machine/crt0.o $@

machine/crt0.o: ; @true

ACLOCAL_AMFLAGS = -I ../../.. -I ../../../..
CONFIG_STATUS_DEPENDENCIES = $(newlib_basedir)/configure.host
