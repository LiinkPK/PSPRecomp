/* Entry 0x08844AB4 | file offset 0x00041A8C | FUN_08844ab4 | bytes 84 */

void FUN_08844ab4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xe8);
    }
    if (iVar1 == 0) break;
    FUN_08843f88(iVar1);
  }
  return;
}

