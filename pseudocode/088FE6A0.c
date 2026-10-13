/* Entry 0x088FE6A0 | file offset 0x000FB678 | FUN_088fe6a0 | bytes 104 */

void FUN_088fe6a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088fe640();
  if (iVar1 != 0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      uVar2 = FUN_08867984(iVar1,0);
      FUN_08883400(uVar2,0,0);
      param_1 = param_1 + 1;
      iVar1 = *param_1;
    }
  }
  return;
}

