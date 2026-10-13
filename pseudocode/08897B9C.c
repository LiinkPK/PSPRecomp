/* Entry 0x08897B9C | file offset 0x00094B74 | FUN_08897b9c | bytes 96 */

void FUN_08897b9c(int param_1,int param_2,ushort param_3)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((-1 < param_2) && (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 8))) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    *(ushort *)(*(int *)(param_1 + 0x60) + param_2 * 0x60 + 0x20) = param_3 & 0xff;
  }
  return;
}

