/* Entry 0x089174E4 | file offset 0x001144BC | FUN_089174e4 | bytes 216 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_089174e4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_08865190(DAT_089d83d8 + 4);
  iVar1 = func_0x08af34a0(_DAT_08b01cf8);
  uVar2 = FUN_0891705c(0xffffffff);
  iVar4 = 0;
  iVar3 = iVar1;
  do {
    FUN_08912ad8(uVar2,iVar4,*(undefined4 *)(iVar3 + 4));
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 5);
  FUN_08912af8(uVar2,*(undefined4 *)(iVar1 + 0xb8),*(undefined4 *)(iVar1 + 0xbc));
  FUN_08913b58(DAT_089d83d8,1);
  FUN_088d1028(DAT_089d7830,*(undefined4 *)(DAT_089d83d8 + 0x750),0x4b000,0x24,&DAT_089d83e0);
  return 1;
}

