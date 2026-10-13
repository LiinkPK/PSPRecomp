/* Entry 0x088AAF08 | file offset 0x000A7EE0 | FUN_088aaf08 | bytes 132 */

void FUN_088aaf08(int param_1,int param_2)

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
    if (*(int *)(*(int *)(iVar1 + 0xc0) + 0x24) == param_2) {
      FUN_088a6a78(iVar1);
    }
  }
  return;
}

