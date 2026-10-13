/* Entry 0x089742B4 | file offset 0x0017128C | FUN_089742b4 | bytes 52 */

int FUN_089742b4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return iVar1;
}

