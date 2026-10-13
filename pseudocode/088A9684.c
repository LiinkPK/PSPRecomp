/* Entry 0x088A9684 | file offset 0x000A665C | FUN_088a9684 | bytes 84 */

void FUN_088a9684(int *param_1)

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
    FUN_088aa248(iVar1);
  }
  return;
}

