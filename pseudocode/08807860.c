/* Entry 0x08807860 | file offset 0x00004838 | FUN_08807860 | bytes 416 */

int FUN_08807860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined **)(param_1 + 0x70) = &DAT_089c6c40;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(short *)(param_1 + 0x24) = (short)param_4;
  iVar1 = param_5;
  if (param_5 < 0) {
    iVar1 = FUN_0880aef8();
  }
  *(short *)(param_1 + 0x26) = (short)iVar1;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 100;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  if (-1 < param_5) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  if (iVar1 == 0) {
    uVar2 = FUN_0880be84(param_4);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  else {
    if ((*(char *)(iVar1 + 0x542) == '\x03') && (*(char *)(iVar1 + 0x60f) != '\0')) {
      *(int *)(param_1 + 0x34) = iVar1 + 0x590;
      if (*(char *)(iVar1 + 0x614) == '\0') {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x5d4);
      }
    }
    else {
      uVar2 = FUN_08837f14(iVar1,param_4);
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      iVar1 = *(int *)(param_1 + 0x20);
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + 0x180);
    iVar1 = FUN_0883739c();
    if ((iVar1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x1024), iVar1 != 0)) {
      *(ushort *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + (ushort)*(byte *)(iVar1 + 2);
    }
  }
  FUN_089a3890(param_1);
  if (DAT_089d2804 == 0) {
    DAT_089d2800 = param_1;
    DAT_089d2804 = param_1;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    *(int *)(DAT_089d2804 + 0x6c) = param_1;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    DAT_089d2804 = param_1;
  }
  return param_1;
}

