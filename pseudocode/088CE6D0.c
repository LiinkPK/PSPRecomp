/* Entry 0x088CE6D0 | file offset 0x000CB6A8 | FUN_088ce6d0 | bytes 76 */

undefined4 FUN_088ce6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088ce71c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(byte *)(*(int *)(param_1 + 4) + 0x14) = *(byte *)(*(int *)(param_1 + 4) + 0x14) & 0xdf;
  }
  return uVar2;
}

