/* Entry 0x088DF860 | file offset 0x000DC838 | FUN_088df860 | bytes 84 */

bool FUN_088df860(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088df7e4();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(*(int *)(param_1 + 8) + 0xc) == 1;
  }
  return bVar1;
}

