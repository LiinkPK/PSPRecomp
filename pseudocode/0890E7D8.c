/* Entry 0x0890E7D8 | file offset 0x0010B7B0 | FUN_0890e7d8 | bytes 120 */

bool FUN_0890e7d8(undefined4 param_1)

{
  int iVar1;
  
  FUN_08902c28(&DAT_09b69b50);
  DAT_089d8360 = &DAT_09b69b50;
  iVar1 = FUN_08902c50(&DAT_09b69b50,param_1);
  if (iVar1 != 1) {
    DAT_089d8360 = (undefined *)0x0;
  }
  return iVar1 == 1;
}

