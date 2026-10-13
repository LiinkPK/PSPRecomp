/* Entry 0x088C47CC | file offset 0x000C17A4 | FUN_088c47cc | bytes 112 */

bool FUN_088c47cc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 + 0x123d8;
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 0x124a0);
  iVar1 = 0;
  param_1[1] = iVar2;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((*(byte *)(iVar4 + 1) & 8) != 0) {
        iVar3 = iVar3 + 1;
        *param_1 = iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 2;
    } while (iVar1 < *(int *)(param_2 + 0x124a0));
  }
  return iVar2 <= iVar3;
}

