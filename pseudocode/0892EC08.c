/* Entry 0x0892EC08 | file offset 0x0012BBE0 | FUN_0892ec08 | bytes 164 */

void FUN_0892ec08(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 uStackX_0)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0892f160(param_1,param_7,param_8,uStackX_0);
  param_1[0x22] = uVar1;
  FUN_0892f2ec(param_1,param_2);
  FUN_0892ee94(param_1,param_3,param_4,param_5,param_6);
  FUN_0892f024(param_1);
  *param_1 = 1;
  return;
}

