# Week one

## Problem: debug c++ in neovim with LLDB

Try to use [LLDB](http://lldb.llvm.org/)

1. Install lldb

Install lldb

```bash

sudo apt-get install lldb

```

2. install lldb front end

[lldb.nvim](https://github.com/critiqjo/lldb.nvim)

3. Fix lldb brocken links

```
cd /usr/lib/llvm-3.8/lib/python2.7/site-packages/lldb
sudo rm _lldb.so
sudo ln -s ../../../liblldb.so.1 _lldb.so
sudo rm libLLVM-3.8.0.so.1
sudo ln -s ../../../libLLVM-3.8.0.so.1 libLLVM-3.8.0.so.1
sudo rm libLLVM-3.8.so.1
sudo ln -s ../../../libLLVM-3.6.0.so.1 libLLVM-3.8.so.1
export PYTHONPATH='/usr/lib/llvm-3.8/lib/python2.7/site-packages'
```

4. Fix lldb-server error

```
sudo update-alternatives --install /usr/bin/lldb-server lldb-server /usr/bin/lldb-server-3.8 100

```

5. Check if all is working

```
python
>>> import neovim
>>>
>>> import lldb
>>>

```
__if not__

Check abouve steps again

6. Check if Neovim has python

```

nvim

:echo has('python')
1
:echo has('python3')
1

```

__If not__

```
pip install --upgrade neovim
pip3 install --uprade neovim

```

1. UpdateRemotePlugins

```
nvim
:UpdateRemotePlugins

```
