/* Entry 0x08847964 | file offset 0x0004493C | FUN_08847964 | bytes 424 */

void FUN_08847964(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *local_20;
  int local_1c;
  int local_18;
  
  local_20 = &DAT_089c8a00;
  iVar2 = 0;
  iVar3 = 0;
  if (*(int *)(param_2 + 0xd5c) != 0) {
    iVar2 = *(int *)(param_2 + 0xd5c) + 0x10 + *(char *)(param_2 + 0xd60) * 0x20;
    iVar3 = (int)*(short *)(iVar2 + 6);
    iVar2 = (int)*(short *)(iVar2 + 4);
  }
  local_1c = param_2;
  local_18 = param_1;
  FUN_088c5e4c(param_1,&local_20,iVar2,iVar3);
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar1 = FUN_08835798(local_1c);
  iVar2 = FUN_088bf4cc(uVar1,99);
  if (iVar2 != 0) {
    iVar4 = *(int *)(*(int *)(local_1c + 0x52c) + 0xc) - *(int *)(*(int *)(local_1c + 0x52c) + 8);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      if ((*(short *)(iVar2 + 4) < 0x33) && ((iVar4 * 100) / iVar3 <= (int)*(short *)(iVar2 + 4))) {
        *(uint *)(param_2 + 0x5c0) = *(uint *)(param_2 + 0x5c0) | 1;
        break;
      }
    }
  }
  iVar2 = FUN_088bf4cc(uVar1,100);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(local_1c + 0x52c) + 0xc) - *(int *)(*(int *)(local_1c + 0x52c) + 8);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar2 == iVar3) {
      *(uint *)(param_2 + 0x5c0) = *(uint *)(param_2 + 0x5c0) | 2;
    }
  }
  iVar2 = FUN_088bf4cc(uVar1,0x67);
  if ((iVar2 != 0) && (iVar2 = FUN_088378e8(local_1c), iVar2 != 0)) {
    *(uint *)(param_2 + 0x5c0) = *(uint *)(param_2 + 0x5c0) | 8;
  }
  return;
}

