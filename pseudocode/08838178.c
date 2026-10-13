/* Entry 0x08838178 | file offset 0x00035150 | FUN_08838178 | bytes 84 */

bool FUN_08838178(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x3a4) == (int *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x3a4);
    bVar1 = (((iVar2 == 0xc || iVar2 == 0xd) || iVar2 == 0xe) || iVar2 == 0x13) || iVar2 == 0x19;
  }
  return bVar1;
}

