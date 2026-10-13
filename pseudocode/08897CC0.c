/* Entry 0x08897CC0 | file offset 0x00094C98 | FUN_08897cc0 | bytes 144 */

void FUN_08897cc0(undefined4 param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (int)param_2 >> 9 & 0x7f;
  param_2 = param_2 & 0x1ff;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      FUN_08897b3c(param_1,param_2,param_3);
    }
    else {
      FUN_08897bfc(param_1,param_2,param_3);
    }
  }
  else if (uVar1 < 3) {
    FUN_08897b9c(param_1,param_2,param_3);
  }
  else if (uVar1 < 4) {
    FUN_08897c5c(param_1,param_2,param_3);
  }
  return;
}

