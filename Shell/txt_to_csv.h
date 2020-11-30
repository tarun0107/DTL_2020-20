#!/bin/bash

for F in /home/tarun/Downloads/normalTrafficTest.txt
do 
{
  read GET
  read UserAgent
  read Pragma
  read CacheControl
  read Accept
  read AcceptEncoding
  read AcceptCharset
  read AcceptLanguage
  read Host
  read Cookie
  read Connection
  } < $F
  echo "$GET, $UserAgent, $Pragma, $Cachecontrol, $Accept, $AcceptEncoding, $AcceptCharset,  $AcceptLanguage, $Host, $Cookie, $Connection" >> outputfile.csv
done


