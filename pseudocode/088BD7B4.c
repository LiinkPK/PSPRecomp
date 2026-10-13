/* Entry 0x088BD7B4 | file offset 0x000BA78C | FUN_088bd7b4 | bytes 212 */

void FUN_088bd7b4(int param_1,int param_2,int *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 0;
  do {
    local_20 = (int)*param_4;
    if (**(short **)(param_4 + 2) != 0) {
      iVar1 = FUN_088bdcc0(param_1,param_1 + *param_3 * 4,&local_20);
      iVar2 = *param_3 * 4;
      if (iVar1 == param_1 + iVar2) {
        if (param_2 <= *param_3) {
          return;
        }
        *(int *)(param_1 + iVar2) = local_20;
        *param_3 = *param_3 + 1;
      }
    }
    iVar3 = iVar3 + 1;
    param_4 = param_4 + 4;
  } while (iVar3 < 4);
  return;
}

