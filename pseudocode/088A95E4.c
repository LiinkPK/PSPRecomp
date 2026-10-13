/* Entry 0x088A95E4 | file offset 0x000A65BC | FUN_088a95e4 | bytes 76 */

void FUN_088a95e4(int *param_1)

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
    FUN_088aa154(iVar1);
  }
  return;
}

