/* Entry 0x088958FC | file offset 0x000928D4 | FUN_088958fc | bytes 128 */

void FUN_088958fc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
      (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
      iVar1 = iVar2;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

