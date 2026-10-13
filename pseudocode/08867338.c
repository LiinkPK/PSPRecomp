/* Entry 0x08867338 | file offset 0x00064310 | FUN_08867338 | bytes 20 */

undefined4 FUN_08867338(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return uVar1;
}

