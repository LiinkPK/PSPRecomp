/* Entry 0x08883D90 | file offset 0x00080D68 | FUN_08883d90 | bytes 96 */

void FUN_08883d90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if (iVar1 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x6c);
    }
    FUN_08882f68(iVar1,3);
    iVar1 = iVar2;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

