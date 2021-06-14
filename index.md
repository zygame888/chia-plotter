This is a new implementation of a chia plotter which is designed as a processing pipeline, similar to how GPUs work, only the "cores" are normal software CPU threads.
As a result this plotter is able to fully max out any storage device's bandwidth, simply by increasing the number of "cores", ie. threads.

### [Dowload last release](https://github.com/stotiks/chia-plotter//releases/latest)
### Usage

```
For <poolkey> and <farmerkey> see output of `chia keys show`.
<tmpdir> needs about 220 GiB space, it will handle about 25% of all writes. (Examples: './', '/mnt/tmp/')
<tmpdir2> needs about 110 GiB space and ideally is a RAM drive, it will handle about 75% of all writes.
Combined (tmpdir + tmpdir2) peak disk usage is less than 256 GiB.
In case of <count> != 1, you may press Ctrl-C for graceful termination after current plot is finished.

Usage:
  chia_plot [OPTION...]

  -n, --count arg      Number of plots to create (default = 1, -1 = infinite)
  -r, --threads arg    Number of threads (default = 4)
  -u, --buckets arg    Number of buckets (default = 256)
  -t, --tmpdir arg     Temporary directory, needs ~220 GiB (default = $PWD)
  -2, --tmpdir2 arg    Temporary directory 2, needs ~110 GiB [RAM] (default = <tmpdir>)
  -d, --finaldir arg   Final directory (default = <tmpdir>)
  -p, --poolkey arg    Pool Public Key (48 bytes)
  -f, --farmerkey arg  Farmer Public Key (48 bytes)
      --help           Print help
```
  
  
**Your donation will help me build new versions**:  
XCH: xch1vhfnguq36yya0kzc0a0wr9yyj5cm2cefsukcu45jef3x3zpjpa7qc888nm


Build based on madMAx43v3r source code, check his [github](https://github.com/madMAx43v3r/chia-plotter).  
**He is a legend!**


### Support or Contact
Join [Telegram Channel](https://t.me/joinchat/MNUucun9Fc05NzFk)  
Join [Telegram Group Chat [EN]](https://t.me/joinchat/Zpp_MrInPN44YzQ0)  
Join [Telegram Group Chat [RU]](https://t.me/joinchat/Ir7pi0SueGU1NjFk)  
