/* Entry 0x0895B4E4 | file offset 0x001584BC | FUN_0895b4e4 | bytes 36 */

undefined4 FUN_0895b4e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  uVar1 = param_2[1];
  param_1[3] = 0;
  param_1[2] = uVar1;
  return 1;
}

