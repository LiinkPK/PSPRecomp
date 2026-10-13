/* Entry 0x088A96D8 | file offset 0x000A66B0 | FUN_088a96d8 | bytes 84 */

void FUN_088a96d8(int *param_1)

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
    FUN_088aa29c(iVar1);
  }
  return;
}

