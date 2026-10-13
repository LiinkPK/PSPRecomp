/* Entry 0x088A5054 | file offset 0x000A202C | FUN_088a5054 | bytes 192 */

bool FUN_088a5054(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  DAT_089d6d70 = sceKernelAllocMemoryBlock("EFFECT_ALLOCATOR",0,0x3dd000,0);
  bVar1 = -1 < DAT_089d6d70;
  if (bVar1) {
    sceKernelGetMemoryBlockAddr(DAT_089d6d70,&local_10);
    FUN_08867310(&DAT_09b4d420,local_10,0x3dd000,0x40);
    DAT_089d6d6c = FUN_088673cc(&DAT_09b4d420,0x60000);
    uVar2 = FUN_088676b4(&DAT_09b4d420,DAT_089d6d6c);
    DAT_089d6d68 = FUN_0885c40c(uVar2,0x60000,"EFFECT SYSTEM MEMORY",0x10);
  }
  return bVar1;
}

