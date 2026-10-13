/* Entry 0x088F4E3C | file offset 0x000F1E14 | FUN_088f4e3c | bytes 120 */

void FUN_088f4e3c(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0;
  param_1[2] = 1;
  uVar1 = FUN_088c0674(10);
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_088b73fc(param_1 + 6);
  iVar2 = 0;
  param_1 = param_1 + 0x69;
  do {
    FUN_088c6fd4(param_1);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x40;
  } while (iVar2 < 4);
  return;
}

