# cowsay
> Typical cowsay in c99


<img align="right" height="300" src="https://github.com/lostsh/cowsay/assets/43549864/28689894-35fa-441b-bb6d-29c0e38eea77">

## Compile
```bash
gcc cow.c -o cowsay
```

## Execute
```bash
./cow Typical cowsay output!
```

<hr>

## Debug compilation
```bash
gcc -g -std=c99 -Wall -pedantic -fsanitize=address cow.c -o cowsay && echo -e "[+]\tCompilation success." || echo -e "[-]\tCompilation exception."
```