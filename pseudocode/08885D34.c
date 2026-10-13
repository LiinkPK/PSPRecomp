/* Entry 0x08885D34 | file offset 0x00082D0C | FUN_08885d34 | bytes 120 */

undefined4 * FUN_08885d34(undefined4 *param_1,undefined1 param_2,short param_3)

{
  undefined4 uVar1;
  
  FUN_08885b0c();
  if (param_3 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_088d0700(DAT_089d7830,param_2,param_3,0xffffffff);
    *param_1 = uVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

