#! /bin/sh

mkdir test0
touch test1 test2 test3 test4 test5
ln -s test0 test6

chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5
chmod 777 test6
chmod 715 test0
