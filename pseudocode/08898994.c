/* Entry 0x08898994 | file offset 0x0009596C | FUN_08898994 | bytes 96 */

int FUN_08898994(int param_1,int param_2)

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
    iVar2 = *(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x40;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

