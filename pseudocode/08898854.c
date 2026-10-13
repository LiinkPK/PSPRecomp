/* Entry 0x08898854 | file offset 0x0009582C | FUN_08898854 | bytes 96 */

undefined1 FUN_08898854(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  
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
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x26);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

