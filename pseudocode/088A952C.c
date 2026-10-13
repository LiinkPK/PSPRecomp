/* Entry 0x088A952C | file offset 0x000A6504 | FUN_088a952c | bytes 96 */

void FUN_088a952c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x34);
    }
    if (iVar1 == 0) break;
    FUN_088a9b18(iVar1);
  }
  param_1[1] = 0;
  *param_1 = 0;
  FUN_088a7fb8();
  return;
}

