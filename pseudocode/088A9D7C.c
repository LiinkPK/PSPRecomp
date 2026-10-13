/* Entry 0x088A9D7C | file offset 0x000A6D54 | FUN_088a9d7c | bytes 108 */

void FUN_088a9d7c(int param_1,int param_2)

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
    if (*(int *)(iVar1 + 0xd0) == param_2) {
      FUN_088a6c70(iVar1);
    }
  }
  return;
}

