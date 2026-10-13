/* Entry 0x08842650 | file offset 0x0003F628 | FUN_08842650 | bytes 148 */

void FUN_08842650(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_089d6c80;
  iVar2 = 0;
  do {
    if (param_1[2] != -1) {
      FUN_088a0dfc(uVar1,param_1[2]);
      param_1[2] = 0xffffffff;
      FUN_088a0d1c(*param_1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 3;
  } while (iVar2 < 3);
  return;
}

