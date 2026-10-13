/* Entry 0x088AA29C | file offset 0x000A7274 | FUN_088aa29c | bytes 84 */

void FUN_088aa29c(int param_1)

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
    FUN_088a7234(iVar1);
  }
  return;
}

