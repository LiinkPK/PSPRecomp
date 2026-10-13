/* Entry 0x088AA154 | file offset 0x000A712C | FUN_088aa154 | bytes 76 */

void FUN_088aa154(int param_1)

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
    FUN_088a6a78(iVar1);
  }
  return;
}

