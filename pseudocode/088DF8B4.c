/* Entry 0x088DF8B4 | file offset 0x000DC88C | FUN_088df8b4 | bytes 84 */

bool FUN_088df8b4(int param_1)

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
    bVar1 = *(short *)(*(int *)(param_1 + 8) + 0xc) == 2;
  }
  return bVar1;
}

