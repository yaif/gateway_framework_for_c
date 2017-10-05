noinst_PROGRAMS = $(TEST_PROGS)

PRODUCTION_CODE_INCLUDES = -I$(top_srcdir)/src
PRODUCTION_CODE_LIBS = $(top_builddir)/src/libdevice_framework_for_c.la

AM_CPPFLAGS = \
	$(CUNIT_CFLAGS)\
	$(PRODUCTION_CODE_INCLUDES)

AM_CFLAGS =	-Werror\
	-Wall\
	-g

AM_CXXFLAGS = $(AM_CFLAGS)

TEST_PROGS = device_framework_for_c_tests

device_framework_for_c_tests_SOURCES = device_framework_for_c_tests.c
device_framework_for_c_tests_LDADD = $(CUNIT_LIBS)\
	$(PRODUCTION_CODE_LIBS)

check_PROGRAMS = $(TEST_PROGS)

TESTS = $(TEST_PROGS)
