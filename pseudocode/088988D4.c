/* Entry 0x088988D4 | file offset 0x000958AC | FUN_088988d4 | bytes 96 */

int FUN_088988d4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    bVar1 = false;
  }
  else if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14)) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x28;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

