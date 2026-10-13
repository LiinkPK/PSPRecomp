/* Entry 0x08899344 | file offset 0x0009631C | FUN_08899344 | bytes 60 */

void FUN_08899344(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08899300();
  *(undefined4 *)(iVar1 + 0x100) = 4;
  iVar1 = FUN_08899300();
  *(undefined4 *)(iVar1 + 0xfc) = param_1;
  return;
}

