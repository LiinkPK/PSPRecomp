/* Entry 0x088AA1A0 | file offset 0x000A7178 | FUN_088aa1a0 | bytes 140 */

void FUN_088aa1a0(int param_1,int param_2,int param_3)

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
    if ((*(int *)(iVar1 + 0xd0) == param_2) &&
       ((param_3 == -1 || (param_3 == *(int *)(*(int *)(iVar1 + 0xc0) + 0x24))))) {
      FUN_088a6a78(iVar1);
    }
  }
  return;
}

