/* Entry 0x08883DF0 | file offset 0x00080DC8 | FUN_08883df0 | bytes 96 */

void FUN_08883df0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if (iVar1 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x70);
    }
    FUN_08882f68(iVar1,3);
    iVar1 = iVar2;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

