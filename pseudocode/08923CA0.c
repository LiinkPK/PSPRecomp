/* Entry 0x08923CA0 | file offset 0x00120C78 | FUN_08923ca0 | bytes 360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08923ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08923e80(0x41f00000);
  iVar1 = FUN_08923e08(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
    if (iVar1 == 0) {
      uVar2 = func_0x08b421fc(_DAT_08b42288,(int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = uVar2;
      FUN_088a6cb8(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0),0x1e);
      iVar1 = -1;
      switch(*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x16)) {
      case 0x14:
        iVar1 = 0x15;
        break;
      case 0x19:
        iVar1 = 0x1a;
        break;
      case 0x1c:
        iVar1 = 0x1d;
        break;
      case 0x1f:
        iVar1 = 0x20;
        break;
      case 0x22:
        iVar1 = 0x23;
      }
      if (iVar1 != -1) {
        uVar2 = func_0x08b421fc(_DAT_08b42288);
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = uVar2;
      }
    }
    else {
      func_0x08b34714(0x41f00000,iVar1);
      if (*(short *)(*(int *)(param_1 + 0x20) + 0x46) != -1) {
        uVar2 = func_0x08b421fc(_DAT_08b42288);
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = uVar2;
        iVar1 = *(int *)(param_1 + 0x20);
        FUN_088a72e8(*(undefined4 *)(iVar1 + 0x68),*(undefined4 *)(iVar1 + 0x6c),
                     *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0xc4));
      }
    }
  }
  return;
}

