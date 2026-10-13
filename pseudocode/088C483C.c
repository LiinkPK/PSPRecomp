/* Entry 0x088C483C | file offset 0x000C1814 | FUN_088c483c | bytes 60 */

bool FUN_088c483c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_088cc2b0();
  *param_1 = iVar1;
  iVar1 = FUN_088cc22c();
  param_1[1] = iVar1;
  return iVar1 <= *param_1;
}

