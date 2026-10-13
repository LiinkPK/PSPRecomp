/* Entry 0x08952E4C | file offset 0x0014FE24 | FUN_08952e4c | bytes 140 */

undefined4
FUN_08952e4c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_08949b24(param_4,param_5,param_6);
  (**(code **)(*param_2 + 0x1c))
            (param_1,(int)param_2 + (int)*(short *)(*param_2 + 0x18),param_3,param_4,param_5);
  return 1;
}

