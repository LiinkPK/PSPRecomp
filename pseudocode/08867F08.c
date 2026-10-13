/* Entry 0x08867F08 | file offset 0x00064EE0 | FUN_08867f08 | bytes 228 */

void FUN_08867f08(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 <= -3.1415927) || (3.1415927 <= param_1)) {
    if (0.0 < param_1) {
      param_1 = (float)FUN_089941c0(param_1 + 3.1415927,0x40c90fdb);
      param_1 = param_1 - 3.1415927;
    }
    else {
      param_1 = (float)FUN_089941c0(3.1415927 - param_1,0x40c90fdb);
      param_1 = 3.1415927 - param_1;
    }
  }
  uVar1 = FUN_089a47a4();
  uVar2 = FUN_089a46dc(param_1);
  *param_2 = uVar1;
  param_2[1] = 0;
  param_2[2] = uVar2;
  param_2[3] = param_1;
  return;
}

