/* Entry 0x08844A60 | file offset 0x00041A38 | FUN_08844a60 | bytes 84 */

void FUN_08844a60(int param_1)

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
    FUN_08843f4c(iVar1);
  }
  return;
}

