## How to generate BTF information from the BTF-unencoded debug info

1. Get the BTF-unencoded debug info

```
$ sudo apt-get install linux-image-$(uname -r)-dbgsym
$ cp /usr/lib/debug/boot/vmlinux-5.13.0-1017-raspi  vmlinux-5.13.0-1017-raspi
```

2. Encode BTF

```
$ pahole -J vmlinux-5.13.0-1017-raspi
```

3. Copy the section of BTF

```
llvm-objcopy --only-section=.BTF --set-section-flags .BTF=alloc,readonly vmlinux-5.13.0-1017-raspi vmlinux-5.13.0-1017-raspi.btf
```
