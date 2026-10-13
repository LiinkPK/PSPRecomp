/* Entry 0x088C45BC | file offset 0x000C1594 | FUN_088c45bc | bytes 108 */

bool FUN_088c45bc(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  iVar2 = *param_3;
  iVar1 = 0;
  param_1[1] = iVar2;
  param_2 = param_2 + 0x11a00;
  iVar3 = 0;
  do {
    iVar4 = *(int *)(param_2 + 0x2c);
    if (iVar4 <= iVar3) {
      iVar4 = *param_1;
    }
    *param_1 = iVar4;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 0x30;
    iVar3 = *param_1;
  } while (iVar1 < 0x23);
  return iVar2 <= iVar3;
}

