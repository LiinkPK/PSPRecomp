/* Entry 0x088D8790 | file offset 0x000D5768 | FUN_088d8790 | bytes 84 */

bool FUN_088d8790(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088d86c0();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(*(int *)(param_1 + 8) + 0xc) == 10;
  }
  return bVar1;
}

