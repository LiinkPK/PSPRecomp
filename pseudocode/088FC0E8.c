/* Entry 0x088FC0E8 | file offset 0x000F90C0 | FUN_088fc0e8 | bytes 116 */

void FUN_088fc0e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088d3cf0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce28);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xabc);
  if ((*(ushort *)(*(int *)(param_1 + 0x30) + 0x16) & 1) == 0) {
    FUN_088d9f5c(uVar1,0,1);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    FUN_088d9f5c(uVar1,1,1);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}

