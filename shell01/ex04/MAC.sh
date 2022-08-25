ifconfig > a
grep 'ether '  a | tr -d 'ether ' | tr -d '\t'
