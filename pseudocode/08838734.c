/* Entry 0x08838734 | file offset 0x0003570C | FUN_08838734 | bytes 532 */

void FUN_08838734(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x380);
  *(uint *)(param_1 + 0x380) = uVar2 | 0x100;
  *(uint *)(param_1 + 0x380) = uVar2 | 0x300;
  *(uint *)(param_1 + 0x380) = uVar2 | 0xb00;
  if ((*(uint *)(param_3 + 8) & 2) != 0) {
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x400;
  }
  if (*(char *)(*(int *)(param_2 + 0x18) + 0x542) == '\x03') {
    if (((*(int *)(param_4 + 0x24) == 0) || (*(char *)(*(int *)(param_4 + 0x24) + 0x542) != '\x01'))
       || (iVar1 = FUN_0883739c(param_1), iVar1 != 1)) {
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x1000;
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x544) + 0x124))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x120));
      if (iVar1 == *(int *)(param_4 + 0x24)) {
        *(byte *)(param_1 + 0x5b7) = *(byte *)(param_1 + 0x5b7) | 0x40;
      }
    }
  }
  else if (((*(char *)(param_4 + 0x34) != '\0') && (-1 < *(short *)(param_2 + 0x2e))) &&
          (*(short *)(param_2 + 0x2e) == *(short *)(param_1 + 0x180))) {
    if (((*(int *)(param_4 + 0x24) == 0) || (*(char *)(*(int *)(param_4 + 0x24) + 0x542) != '\x01'))
       || (iVar1 = FUN_0883739c(param_1), iVar1 != 1)) {
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x1000;
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x544) + 0x124))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x120));
      if (iVar1 == *(int *)(param_4 + 0x24)) {
        *(byte *)(param_1 + 0x5b7) = *(byte *)(param_1 + 0x5b7) | 0x40;
      }
    }
  }
  if (*(int *)(param_1 + 0x534) != 0) {
    FUN_088393f4(*(int *)(param_1 + 0x534),param_2,param_3,param_4);
  }
  if (*(int *)(param_5 + 0x534) != 0) {
    FUN_088394b8(*(int *)(param_5 + 0x534),param_2,param_3,param_4);
  }
  return;
}

