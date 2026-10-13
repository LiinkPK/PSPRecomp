/* Entry 0x088D5458 | file offset 0x000D2430 | FUN_088d5458 | bytes 76 */

undefined4 FUN_088d5458(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
     (iVar1 = FUN_0889f35c(DAT_089d6c30), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

