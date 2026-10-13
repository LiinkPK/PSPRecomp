/* Entry 0x088F7E78 | file offset 0x000F4E50 | FUN_088f7e78 | bytes 124 */

bool FUN_088f7e78(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [16];
  
  param_1 = param_1 + param_2 * 0x1270;
  iVar1 = FUN_088f64dc(auStack_20,auStack_1c,DAT_089d712c + 0xf58,param_1 + 0x14c80);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x15ed0) = 0;
    *(undefined4 *)(param_1 + 0x15ed4) = 0;
    *(undefined4 *)(param_1 + 0x15ed8) = 0;
    *(undefined4 *)(param_1 + 0x15edc) = 0;
  }
  return iVar1 == 1;
}

