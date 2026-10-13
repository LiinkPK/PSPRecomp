/* Entry 0x088198F4 | file offset 0x000168CC | FUN_088198f4 | bytes 476 */

void FUN_088198f4(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0881baa8();
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 < 2) {
    if (iVar2 < 1) {
      return;
    }
    iVar2 = FUN_0881c938(uVar1,param_2);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_08818b28(param_2);
      uVar1 = FUN_0881baa8();
      FUN_0881cae0(uVar1,(int)**(short **)(param_2 + 0x48),1,0);
      if (*(int *)(param_2 + 0x14) == 0) {
        return;
      }
      FUN_08814fa0();
      return;
    }
    *(undefined4 *)(param_2 + 0x38) = 2;
    if ((*(ushort *)(*(int *)(param_2 + 0x48) + 10) & 8) == 0) {
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x10);
    }
    uVar1 = FUN_0881baa8();
    FUN_0881c0a8(uVar1,*(undefined4 *)(param_2 + 0x48),1);
    uVar1 = FUN_0881baa8();
    FUN_0881cae0(uVar1,(int)**(short **)(param_2 + 0x48),1,1);
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_08815718(*(int *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x40),
                   *(undefined1 *)(param_2 + 0x45));
    }
  }
  else if (2 < iVar2) {
    return;
  }
  if ((*(ushort *)(*(int *)(param_2 + 0x48) + 10) & 8) == 0) {
    if ((0.0 < *(float *)(param_2 + 0x3c)) &&
       (param_1 = *(float *)(param_2 + 0x3c) - param_1, *(float *)(param_2 + 0x3c) = param_1,
       0.0 < param_1)) {
      return;
    }
  }
  else if ((*(int *)(param_2 + 0x14) != 0) && (iVar2 = FUN_08815ce8(), iVar2 == 0)) {
    return;
  }
  if ((*(int *)(param_2 + 0x4c) != 0) && (*(int *)(*(int *)(param_2 + 0x4c) + 0x5c) == 1)) {
    FUN_0881a0e4(param_2 + 0x18);
  }
  FUN_08818b28(param_2);
  return;
}

