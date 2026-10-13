/* Entry 0x08882E80 | file offset 0x0007FE58 | FUN_08882e80 | bytes 72 */

undefined4 FUN_08882e80(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_089d69b8;
  iVar2 = sceKernelVolatileMemLock(0,DAT_089d69b8,DAT_089d69b8 + 1);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}

