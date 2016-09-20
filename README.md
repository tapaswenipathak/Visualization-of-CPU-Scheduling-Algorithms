Visualization of CPU Scheduling Algorithms
======

##Uses
[graphics.h] (http://www.programmingsimplified.com/c/graphics.h)

##Instructions
To use this code you need to install some packages and libraries which will enable you to compile **graphics.h** program in Linux.

0.  sudo apt-get install build-essential

1.  sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-1.8 guile-1.8-dev libsdl1.2debian-all libart-2.0-dev libaudiofile-dev libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev
    
    For Ubuntu 15.04 :- sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-1.8 guile-1.8-dev libsdl1.2debian:i386 libsdl1.2debian libart-2.0-dev libaudiofile-dev libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev

2.  Download [libgraph] (http://download.savannah.gnu.org/releases/libgraph/libgraph-1.0.2.tar.gz).

         tar -xvzf libgraph-1.0.2

		 cd libgraph-1.0.2

		 ./configure

		 sudo make

		 sudo make install

		 sudo cp /usr/local/lib/libgraph.* /usr/lib

##Compile and Run
0.  Compile and run the source code files.

		 gcc generatepid.c struct.h graphics.c main.c -lgraph

		 ./a.out

1.  Enter the number of process and view how these CPU scheduling algorithm works. Everything will be genrated ran		       domly.


[![Bitdeli Badge](https://d2weczhvl823v0.cloudfront.net/tapasweni-pathak/visualization-of-cpu-scheduling-algorithms/trend.png)](https://bitdeli.com/free "Bitdeli Badge")
