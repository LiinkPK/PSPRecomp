/* Entry 0x08898EE8 | file offset 0x00095EC0 | FUN_08898ee8 | bytes 116 */

void FUN_08898ee8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (iVar1 = 0, 0 < *(int *)(*(int *)(param_1 + 0x58) + 0x14)))
  {
    do {
      FUN_088981b4(param_1,iVar1,1,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(int *)(param_1 + 0x58) + 0x14));
  }
  return;
}

