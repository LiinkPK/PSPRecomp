/* Entry 0x08898F84 | file offset 0x00095F5C | FUN_08898f84 | bytes 500 */

void FUN_08898f84(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x3c] == 0) {
    param_1[0x19] = 0;
  }
  else {
    if (*param_1 != 0) {
      FUN_0885c538(param_1[0x3c],*param_1,0x40);
      *param_1 = 0;
    }
    iVar2 = 0;
    piVar1 = param_1;
    do {
      if (piVar1[0x20] != 0) {
        FUN_0885c538(param_1[0x3c],piVar1[0x20],0);
        piVar1[0x20] = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < 2);
    if (param_1[0x19] != 0) {
      FUN_0885c538(param_1[0x3c],param_1[0x19],0);
      param_1[0x19] = 0;
    }
    if (param_1[0x1d] != 0) {
      FUN_0885c538(param_1[0x3c],param_1[0x1d],0);
      param_1[0x1d] = 0;
    }
    if (param_1[0x23] != 0) {
      FUN_0885c538(param_1[0x3c],param_1[0x23],0);
      param_1[0x23] = 0;
    }
    if (param_1[0x2a] == 0) {
      param_1[0x19] = 0;
    }
    else {
      FUN_0885c538(param_1[0x3c],param_1[0x2a],0);
      param_1[0x2a] = 0;
      param_1[0x19] = 0;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = 0;
  piVar1 = param_1;
  do {
    piVar1[6] = 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  param_1[9] = 0;
  iVar2 = 0;
  piVar1 = param_1;
  do {
    piVar1[10] = 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  return;
}

