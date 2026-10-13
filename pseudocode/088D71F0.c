/* Entry 0x088D71F0 | file offset 0x000D41C8 | FUN_088d71f0 | bytes 76 */

undefined4 FUN_088d71f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(byte *)(*(int *)(param_1 + 0xc) + 0x14) = *(byte *)(*(int *)(param_1 + 0xc) + 0x14) & 0xdf;
  }
  return uVar2;
}

