MEMORY
{
  ram (rwx) : ORIGIN = 0x20000C00, LENGTH = 64K - 3K
  rom (rx)  : ORIGIN = 0x08005000, LENGTH = 512K - 20K
}
