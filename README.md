![](https://img.shields.io/badge/-Visualization%20of%20CPU%20Scheduling%20Algorithms-blueviolet.svg)

Visualization of CPU Scheduling Algorithms
======
[![GitHub issues](https://img.shields.io/github/issues/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms.svg)](https://github.com/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms/issues)
[![GitHub forks](https://img.shields.io/github/forks/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms.svg)](https://github.com/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms/network)
[![GitHub stars](https://img.shields.io/github/stars/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms.svg)](https://github.com/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms/stargazers)
[![GitHub license](https://img.shields.io/github/license/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms.svg)](https://github.com/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms/blob/master/License)
[![Twitter](https://img.shields.io/twitter/url/https/github.com/tapaswenipathak/Visualization-of-CPU-Scheduling-Algorithms.svg?label=Visualization-of-CPU-Scheduling-Algorithms&style=social)](https://twitter.com/intent/tweet?text=Visualization%20of%20CPUScheduling%20Algorithm:&url=https%3A%2F%2Fgithub.com%2Ftapaswenipathak%2FVisualization-of-CPU-Scheduling-Algorithms)


## Code structure

1. `struct.h`: This has structure of the process which has process ID, arrival time, burst time and struct object. Create struct object in this file if you need more process objects.

2. `generatepid.c`: This generates and assigns process ids, arrival time, burst time.

3. `main.c`: This file is used to let the user provide the number of processes which
is later used in other files.

4. `graphics.c`: This has basic implementation of visualization using C graphics library [graphics.h](http://www.programmingsimplified.com/c/graphics.h).
To add implementation of any new CPU scheduling algorithm:
    * Change the name of the algorithm
    * Manipulate the sorting algorithm

## Instructions
To use this code you need to install some packages and libraries which will enable you to compile **graphics.h** program in Linux.

0.  `sudo apt-get install build-essential`

1.  For Ubuntu 16.04: `sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-2.0 guile-2.0-dev libsdl1.2debian-all libart-2.0-dev libaudiofile-dev libesd0-dev libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev`

2.  Download [libgraph](http://download.savannah.gnu.org/releases/libgraph/libgraph-1.0.2.tar.gz).

    ```bash

    tar -xvzf libgraph-1.0.2

    cd libgraph-1.0.2

    ./configure

    sudo make

    sudo make install

    sudo cp /usr/local/lib/libgraph.* /usr/lib

     ```

## Compile and Run
0.  Compile and run the source code files.

    ```bash

    gcc generatepid.c struct.h graphics.c main.c -lgraph

    ./a.out

    ```

1.  Enter the number of process and view how these CPU scheduling algorithm works. Everything will be genrated randomly.

