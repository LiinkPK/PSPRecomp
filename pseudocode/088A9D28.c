/* Entry 0x088A9D28 | file offset 0x000A6D00 | FUN_088a9d28 | bytes 84 */

void FUN_088a9d28(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x27c);
    }
    if (iVar1 == 0) break;
    FUN_088a6c70(iVar1);
  }
  return;
}

