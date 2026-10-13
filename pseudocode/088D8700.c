/* Entry 0x088D8700 | file offset 0x000D56D8 | FUN_088d8700 | bytes 60 */

bool FUN_088d8700(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088d86c0();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 8) == 0;
  }
  return bVar1;
}

