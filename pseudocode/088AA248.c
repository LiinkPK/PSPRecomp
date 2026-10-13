/* Entry 0x088AA248 | file offset 0x000A7220 | FUN_088aa248 | bytes 84 */

void FUN_088aa248(int param_1)

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
    FUN_088a71d8(iVar1);
  }
  return;
}

