FROM ubuntu:18.04
MAINTAINER "dobigthing"

RUN apt-get -y update && apt-get -y upgrade
RUN apt-get -y install gdb bison flex git make cmake build-essential gcc-multilib g++-multilib xinetd libreadline-dev zlib1g-dev 
RUN useradd -ms /bin/bash mysql
RUN apt-get -y install clang libssl-dev libncurses5-dev
RUN apt -y install pkg-config

USER mysql
WORKDIR /home/mysql
RUN git clone -c http.proxy="http://127.0.0.1:8889" https://github.com/google/AFL.git

WORKDIR /home/mysql/AFL 
RUN sed -i  's/#define MAP_SIZE_POW2       16/#define MAP_SIZE_POW2       18/' config.h
RUN make
WORKDIR /home/mysql/AFL/llvm_mode
ENV LLVM_CONFIG=llvm-config-6.0
RUN make 

WORKDIR /home/mysql
RUN git clone -c http.proxy="http://127.0.0.1:8889" https://github.com/mysql/mysql-server.git 

WORKDIR /home/mysql/mysql-server 
RUN mkdir bld


WORKDIR /home/mysql/mysql-server/bld
ENV CC=/home/mysql/AFL/afl-clang-fast
ENV CXX=/home/mysql/AFL/afl-clang-fast++
ENV AFL_INST_RATIO=1

RUN set http_proxy "http://127.0.0.1:8889"

COPY boost_1_73_0 /home/mysql/mysql-server/boost

RUN cmake .. -DWITH_BOOST=../boost/
RUN make -j8
USER root
RUN make install

WORKDIR /usr/local/mysql
USER root
RUN mkdir mysql-files && chown mysql:mysql mysql-files && chmod 750 mysql-files && bin/mysqld --initialize-insecure --user=mysql && bin/mysql_ssl_rsa_setup

USER root 
RUN apt-get install -y gcc-8 g++-8

USER mysql
RUN mkdir /home/mysql/fuzzing/
RUN mkdir /home/mysql/mysql-server/bld_orignal/ 
WORKDIR /home/mysql/mysql-server/bld_orignal/
ENV CC=
ENV CXX=
RUN cmake .. -DWITH_BOOST=../boost/ && make -j8

USER root 
RUN apt-get -y update
RUN apt-get install -y vim tmux python-pip

USER mysql
COPY afl-fuzz /home/mysql/fuzzing/afl-fuzz
COPY init_lib/ /home/mysql/fuzzing/fuzz_root/init_lib/
COPY input/ /home/mysql/fuzzing/fuzz_root/crashes/
COPY init_lib/ /home/mysql/fuzzing/fuzz_root/mysql_initlib/
COPY global_data_lib_mysql /home/mysql/fuzzing/fuzz_root/
COPY safe_generate_type_mysql /home/mysql/fuzzing/fuzz_root/
COPY run.py /home/mysql/fuzzing/fuzz_root/run.py

USER root
RUN chown -R mysql:mysql /home/mysql/fuzzing/
ENV LC_ALL="en_US.UTF-8"
USER mysql
RUN pip install libtmux
#RUN /home/mysql/fuzzing/fuzz_root/create.sh
WORKDIR /home/mysql/fuzzing/fuzz_root
ENTRYPOINT bash
#ENTRYPOINT python run.py

#ENTRYPOINT ../afl-fuzz -t 2000 -m 2000 -i ./crashes -o ../output /usr/local/pgsql/bin/postgres --single -D /usr/local/pgsql/data main 

