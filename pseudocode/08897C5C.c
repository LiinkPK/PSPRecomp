/* Entry 0x08897C5C | file offset 0x00094C34 | FUN_08897c5c | bytes 100 */

void FUN_08897c5c(int param_1,int param_2,ushort param_3)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((-1 < param_2) && (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0xc))) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    *(ushort *)(*(int *)(param_1 + 0x68) + param_2 * 0x2c + 0x20) = param_3 & 0xff;
  }
  return;
}

