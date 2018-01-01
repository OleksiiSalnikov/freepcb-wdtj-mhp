prefix=/opt/ClibPDF
bindir=$(prefix)/bin
mandir=$(prefix)/man
libdir=$(prefix)/lib
incdir=$(prefix)/include
fontdir=$(prefix)/font

FONT=fonts/UtopiaBold.pfb  fonts/UtopiaMediumItalic.pfm \
fonts/UtopiaBoldItalic.pfb  fonts/UtopiaBold.pfm fonts/UtopiaMedium.pfb \
fonts/UtopiaBoldItalic.pfm  fonts/UtopiaMediumItalic.pfb fonts/UtopiaMedium.pfm

all: config
	cd source ; make all
	cd util/t1utils-1.9 ; make

config:
	cd util/t1utils-1.9 ; configure
clean:
	cd source ; make clean
	cd util/t1utils-1.9 ; make clean

install:
	test -d $(bindir) || mkdirhier $(bindir)
	test -d $(libdir) || mkdirhier $(libdir)
	test -d $(mandir) || mkdirhier $(mandir)
	test -d $(incdir) || mkdirhier $(incdir)
	test -d $(fontdir) || mkdirhier $(fontdir)
	cd source ; make install
	for i in $(FONT);do \
	(set -x;bsdinst -c -m 0644 $$i $(fontdir)); \
	done
	cd util/t1utils-1.9 ; make install	

