/* Entry 0x088CD988 | file offset 0x000CA960 | FUN_088cd988 | bytes 76 */

undefined4 FUN_088cd988(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088cd9d4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(byte *)(*(int *)(param_1 + 4) + 0x14) = *(byte *)(*(int *)(param_1 + 4) + 0x14) & 0xdf;
  }
  return uVar2;
}

