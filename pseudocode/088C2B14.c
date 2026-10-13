/* Entry 0x088C2B14 | file offset 0x000BFAEC | FUN_088c2b14 | bytes 160 */

bool FUN_088c2b14(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  param_2 = param_2 + 0x120a8;
  iVar3 = 999999999;
  do {
    iVar1 = FUN_088b2b8c(param_2);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0x2c;
  } while (iVar2 < 0x13);
  *param_1 = iVar3;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar3;
}

