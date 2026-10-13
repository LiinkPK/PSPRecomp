/* Entry 0x08870000 | file offset 0x0006CFD8 | FUN_08870000 | bytes 152 */

undefined4
FUN_08870000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  if (param_6 == 0) {
    uVar1 = 0x80000016;
  }
  else {
    FUN_0886fd08(param_1,param_2,0,param_4,param_3,param_4,param_5,param_6);
    DAT_09b26b30 = param_7;
    DAT_09b26b34 = param_8;
    uVar1 = FUN_08870154(param_1);
  }
  return uVar1;
}

