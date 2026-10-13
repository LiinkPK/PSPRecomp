/* Entry 0x088EA908 | file offset 0x000E78E0 | FUN_088ea908 | bytes 224 */

void FUN_088ea908(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < 0x2be) {
    if (699 < uVar1) {
      if (uVar1 < 0x2bd) {
        FUN_088a24d4(0,*(undefined4 *)(param_2 + 4),1,0);
      }
      else {
        FUN_088a2664((float)*(int *)(param_2 + 6),*(undefined4 *)(param_2 + 4));
      }
    }
  }
  else if (uVar1 < 0x2bf) {
    FUN_088a27d0((float)*(int *)(param_2 + 6) / 100.0,(float)*(int *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 4));
  }
  else if (uVar1 < 0x2c0) {
    FUN_088a097c(*(undefined4 *)(param_2 + 4),(float)*(int *)(param_2 + 6),DAT_089d6c88 + 0x14);
  }
  return;
}

