/* Entry 0x08923AAC | file offset 0x00120A84 | FUN_08923aac | bytes 304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08923aac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
  if (iVar2 == 0) {
    uVar1 = func_0x08b421fc(_DAT_08b42288,(int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = uVar1;
    iVar2 = -1;
    switch(*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x16)) {
    case 0x14:
      iVar2 = 0x15;
      break;
    case 0x19:
      iVar2 = 0x18;
      break;
    case 0x1c:
      iVar2 = 0x1b;
      break;
    case 0x1f:
      iVar2 = 0x1e;
      break;
    case 0x22:
      iVar2 = 0x21;
    }
    if (iVar2 != -1) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc0) + 0xe0) = 0x41a00000;
      uVar1 = func_0x08b421fc(_DAT_08b42288,iVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = uVar1;
    }
  }
  else {
    func_0x08b347d4(0x42700000,iVar2);
    if (*(short *)(*(int *)(param_1 + 0x20) + 0x44) != -1) {
      uVar1 = func_0x08b421fc(_DAT_08b42288);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = uVar1;
      iVar2 = *(int *)(param_1 + 0x20);
      FUN_088a72e8(*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x60),
                   *(undefined4 *)(iVar2 + 100),*(undefined4 *)(iVar2 + 0xc4));
    }
  }
  return;
}

