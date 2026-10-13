/* Entry 0x088434C8 | file offset 0x000404A0 | FUN_088434c8 | bytes 84 */

void FUN_088434c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = 0;
  if (iVar2 != 0) {
    FUN_08993560(iVar2 + 8,1,0x50,&LAB_08842f70);
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}

