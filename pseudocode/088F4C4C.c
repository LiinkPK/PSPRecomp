/* Entry 0x088F4C4C | file offset 0x000F1C24 | FUN_088f4c4c | bytes 104 */

void FUN_088f4c4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  
  sceWlanGetEtherAddr(auStack_20);
  iVar1 = FUN_08935490(param_1 + 0x10,auStack_20,6);
  if (iVar1 != 0) {
    FUN_08935524(param_1 + 0x10,auStack_20,6);
    uVar2 = FUN_088f5d40();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  return;
}

