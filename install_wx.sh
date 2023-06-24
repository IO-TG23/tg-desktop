bzip2 -d wxWidgets-3.2.1.tar.bz2 ;
tar xf wxWidgets-3.2.1.tar ;
cd wxWidgets-3.2.1 ;    
mkdir gtk-build ;
cd gtk-build ;
../configure ;
make -j3 ;
make install ;
ldconfig
