#! /bin/sh

inno="/inno-5.5.1"

appname=vl
version=`../../../version $appname`
top=../../root/usr/local
base=../../../../xt_base
baseutil=$base/packages/util
basefiles=$base/packages/files

utod=$baseutil/utod.exe
if [ ! -f $utod ]; then
    cwd=`pwd`
    cd $baseutil
    make utod.exe
    cd $cwd
fi

lib=$top/xictools/$appname
$utod $lib/README
$utod $lib/ChangeLog
$utod $lib/verilog-manual.html

$utod $lib/examples/ivl/*
$utod $lib/examples/ivl/contrib/*
$utod $lib/examples/ivl/extra/*
$utod $lib/examples/ivl/ivltests/*
$utod $lib/examples/book/*
$utod $lib/examples/book/ch13/eg/*
$utod $lib/examples/book/ch13/mag_comp/*
$utod $lib/examples/book/ch13/vending/*
$utod $lib/examples/book/ch14/eg/*
$utod $lib/examples/book/ch14/mag_comp/*
$utod $lib/examples/book/ch14/vending/*
$utod $lib/examples_vbs/*

sed -e s/VERSION/$version/ < files/$appname.iss.in > $appname.iss
$utod $appname.iss

$inno/iscc $appname.iss > build.log
if [ $? != 0 ]; then
    echo Compile failed!
    exit 1
fi

exfiles="$pkgfiles/$appname-Win32*.exe"
if [ -n "$exfiles" ]; then
    for a in $exfiles; do
        rm -f $a
    done
fi

mv Output/*.exe $pkgfiles
rmdir Output
rm $appname.iss
echo Done
