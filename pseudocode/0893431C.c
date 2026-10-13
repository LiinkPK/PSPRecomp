/* Entry 0x0893431C | file offset 0x001312F4 | FUN_0893431c | bytes 240 */

/* WARNING: Removing unreachable block (ram,0x08934350) */
/* WARNING: Removing unreachable block (ram,0x0893435c) */

uint FUN_0893431c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_09af02b0 == 0) &&
     (DAT_09af02b8 = sceKernelAllocPartitionMemory(2,"UserSbrk",3,0x10000,0x1000), 0 < DAT_09af02b8)
     ) {
    DAT_09af02ac = sceKernelGetBlockHeadAddr(DAT_09af02b8);
    DAT_09af02b4 = DAT_09af02ac + 0x10000;
    DAT_09af02b0 = DAT_09af02ac;
  }
  uVar1 = DAT_09af02ac;
  if (DAT_09af02b0 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = DAT_09af02ac + param_1;
    uVar2 = 0xffffffff;
    if ((DAT_09af02b0 <= uVar3) && (uVar2 = DAT_09af02ac, uVar1 = uVar3, DAT_09af02b4 < uVar3)) {
      return 0xffffffff;
    }
  }
  DAT_09af02ac = uVar1;
  return uVar2;
}

