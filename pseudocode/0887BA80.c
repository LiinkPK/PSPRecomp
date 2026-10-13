/* Entry 0x0887BA80 | file offset 0x00078A58 | FUN_0887ba80 | bytes 84 */

undefined4 FUN_0887ba80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1[4] & 0x2000U) == 0) && (*param_1 != 0)) {
    uVar1 = FUN_0887a5f8(*param_1,param_2,param_3);
  }
  return uVar1;
}

