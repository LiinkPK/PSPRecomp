/* Entry 0x08916854 | file offset 0x0011382C | FUN_08916854 | bytes 80 */

void FUN_08916854(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x54) + 6);
  if (cVar1 != -1) {
    FUN_0889f2d4(DAT_089d6c30,cVar1);
    FUN_08895f60(DAT_089d6ae8);
  }
  return;
}

