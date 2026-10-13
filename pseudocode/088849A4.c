/* Entry 0x088849A4 | file offset 0x0008197C | FUN_088849a4 | bytes 148 */

undefined4 * FUN_088849a4(undefined4 *param_1,undefined1 param_2,short param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  FUN_08885b0c();
  if (param_3 == -1) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = FUN_088d0700(DAT_089d7830,param_2,param_3,param_4);
    *param_1 = uVar1;
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

